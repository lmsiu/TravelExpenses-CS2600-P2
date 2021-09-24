#include <stdio.h>
#include "header.h"

double getCarRentalFees(){
    double carRentalFees;
    printf("If you rented a car, how much were car rental fees (if none enter 0.0) in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &carRentalFees);

    carRentalFees = checkIfNegative(carRentalFees);

    // if(carRentalFees<0.0){
    //     printf("Car rental fees can't be less than 0. Please enter 0.0 if there were no car rental fees\n");
    //     scanf("%lf", &carRentalFees);
    // }

    return carRentalFees;
}

double getConfrenceandSeminarFees(){
    double confrenceFees;
    printf("How much were the total confrence and seminar fees? (Enter 0.0 if none)\n");
    scanf("%lf", &confrenceFees);

    confrenceFees = checkIfNegative(confrenceFees);

    return confrenceFees;

}

double getParkingFees(int tripLength, int expensesORcomp){
    double parkingFees;
    double feesCovered;
    double remainingFees;
    //if expensesORcomp = 1, return how much the user owes for parking/saved on parking (if value is positive, the owe, if negative, the saved)
    //if expensesORcomp = 0, return allowable expenses for parking from company
    //if expensesORcomp = anything other than 0 or 1, return total parking fees incured by user

    printf("How much did you spend on parking fees in total? Please note you will only be compensated $6.00 per day. (Enter 0.0 if none)\n");
    scanf("%lf", &parkingFees);

    parkingFees = checkIfNegative(parkingFees);

    feesCovered = 6.0 * tripLength;


    remainingFees = parkingFees - feesCovered; //if this value is negative, it's how much the user SAVED 

    if(expensesORcomp == 1){
        return remainingFees; //if remaining fees is negative, it's the amount they saved
    } else if(expensesORcomp == 0){
        return feesCovered; 
    }
    
    return parkingFees;

    //NOTE: tripLength should not be negative. This should be handled in main() already as the value passed in will be from getDaysonTrip which cannot return a value less than 1
    
}

double getMilesDrivenCompensation(){
    double miles;
    double milesComp;

    printf("If you used a private vehical, how many miles did you drive (Enter 0.0 if a private vehical was not used)\n");
    scanf("%lf", &miles);

    miles = checkIfNegative(miles);

    milesComp = miles * 0.27;

    return milesComp;
}

double getHotelExpenses(){

}

double checkIfNegative(double value){
    while(value < 0.0){
        printf("Amount can not be less than 0. Please enter 0.0 if there were no fees of this type\n");
        scanf("%lf", &value);
    }

    return value;
}