#include <stdio.h>
#include "header.h"

double getCarRentalFees(){
    double carRentalFees;
    printf("If you rented a car, how much were car rental fees (if none enter 0.0) in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &carRentalFees);

    carRentalFees = checkIfNegative(carRentalFees);

    return carRentalFees;
}

double getConfrenceandSeminarFees(){
    double confrenceFees;
    printf("How much were the total confrence and seminar fees? (Enter 0.0 if none)\n");
    scanf("%lf", &confrenceFees);

    confrenceFees = checkIfNegative(confrenceFees);

    return confrenceFees;

}

double getParkingFees(int tripLength){
    //DELETE comments in this function when done w/ program
    //to get the total fees incured by the user, please add getParkingFeesCovered to the amount returned in this function
    double parkingFees;
    double feesCovered;
    double remainingFees;

    printf("How much did you spend on parking fees in total? Enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99). Please note you will only be compensated $6.00 per day. (Enter 0.0 if none)\n");
    scanf("%lf", &parkingFees);

    parkingFees = checkIfNegative(parkingFees);


    remainingFees = parkingFees - getParkingFeesCovered(tripLength); //if this value is negative, it's how much the user SAVED 

    return remainingFees;

    //NOTE: tripLength should not be negative. This should be handled in main() already as the value passed in will be from getDaysonTrip which cannot return a value less than 1
    
}

//for calculating total expenses allocated by company
double getParkingFeesCovered(int tripLength){
    return 6.0*tripLength;
}

double getMilesDrivenCompensation(){
    double miles;
    double milesComp;

    printf("If you used a private vehicle, how many miles did you drive (Enter 0.0 if a private vehical was not used). Please enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &miles);

    miles = checkIfNegative(miles);

    milesComp = miles * 0.27;

    return milesComp;
}

double getHotelExpenses(int tripLength){
    double hotelExpenses;
    double remainingExpenses;

    printf("How much did you spend on hotel expenses in total? (Please enter 0.0 if none) Please enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &hotelExpenses);

    hotelExpenses = checkIfNegative(hotelExpenses);

    remainingExpenses = hotelExpenses - getHotelExpensesCovered(tripLength);

    return remainingExpenses;

    //DELETE these comments when done w/ program:
    //NOTE: tripLength should not be negative. This should be handled in main() already as the value passed in will be from getDaysonTrip which cannot return a value less than 1
    //to calculate total expenses incurred by user, add getHotelExpensesCovered() and getHotelExpenses
}

//for calculating total expenses allocated by company
double getHotelExpensesCovered(int tripLength){
    return 90.0*tripLength;
}

double checkIfNegative(double value){
    while(value < 0.0){
        printf("Amount can not be less than 0. Please enter 0.0 if there were no fees of this type\n");
        scanf("%lf", &value);
    }

    return value;
}