#include <stdio.h>
#include "header.h"

double getCarRentalFees(double carRentalFees){
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

double getParkingFees(int tripLength, double parkingFees){
    parkingFees = checkIfNegative(parkingFees);
    return (parkingFees - getParkingFeesCovered(tripLength));
    //if this value is negative, it's how much the user SAVED   
}

//for calculating total expenses allocated by company
double getParkingFeesCovered(int tripLength){
    return 6.0*tripLength;
}

double getMilesDrivenCompensation(double miles){
    miles = checkIfNegative(miles);
    return (miles * 0.27);
}

double getTaxiFees(int tripLength, double taxiFees){
    taxiFees = checkIfNegative(taxiFees);
    return (taxiFees - getTaxiFeesCovered(taxiFees));
}

double getTaxiFeesCovered(int tripLength){
    return 10.0*tripLength;
}

double getHotelExpenses(int tripLength, double hotelExpenses){
    hotelExpenses = checkIfNegative(hotelExpenses);
    return (hotelExpenses - getHotelExpensesCovered(tripLength));
}

//for calculating total expenses allocated by company
double getHotelExpensesCovered(int tripLength){
    return 90.0*tripLength;
}

double checkIfNegative(double value){
    while(value < 0.0){
        printf("Amount can not be less than 0. Please enter 0.0 if there were no fees of this type\n");
        scanf("%lf", &value);
        while ((getchar()) != '\n'); // Clear input buffer
    }

    return value;
}


//return trip basic info
int getDaysonTrip(){
    return tripLength;
}

int getArrivalTime(){
    return arrival_time;
}

int getDepartureTime(){
    return departure_time;
}

void checkDays(int tripLength) {
    while (tripLength < 1)
    {
        printf("Days cannot be less then 1, please enter again: ");
        scanf("%i", &tripLength);
    }
}