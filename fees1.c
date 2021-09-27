#include <stdio.h>
#include "header.h"

double getCarRentalFees(double carRentalFees){
    checkIfNegative(carRentalFees);
    return carRentalFees;
}

double getConferenceandSeminarFees(double conferenceFees){
    checkIfNegative(conferenceFees);
    return conferenceFees;
}

double getParkingFees(double parkingFees){
    checkIfNegative(parkingFees);  
}

//for calculating total expenses allocated by company
double getParkingFeesCovered(int tripLength){
    return 6.0*tripLength;
}

double calculateParkingFees(double parkingFees, double maxParkingFees) {
    return (maxParkingFees - parkingFees);
}


double getMilesDrivenCompensation(double miles){
    checkIfNegative(miles);
    return (miles * 0.27);
}

double getTaxiFees(double taxiFees){
    checkIfNegative(taxiFees);
    return taxiFees;
}

double getTaxiFeesCovered(int tripLength){
    return 10.0*tripLength;
}

double calculateTaxiFees(double TaxiFees, double maxTaxiFees) {
    return (maxTaxiFees - TaxiFees);
}

double getHotelExpenses(double hotelExpenses){
    checkIfNegative(hotelExpenses);
    return hotelExpenses;
} 

//for calculating total expenses allocated by company
double getHotelExpensesCovered(int tripLength){
    return 90.0*tripLength;
}

double calculateHotelFees(double hotelFees, double maxHotelFees) {
    return (maxHotelFees - hotelFees);
}

void checkIfNegative(double value){
    while(value < 0.0){
        printf("Amount can not be less than 0. Please enter 0.0 if there were no fees of this type\n");
        scanf("%lf", &value);
        while ((getchar()) != '\n'); // Clear input buffer
    }
}

//display function
void taxuFeeDisplay(double taxiFees_extra) {
    if (taxiFees_extra < 0) {
        taxiFees_extra = 0 - taxiFees_extra;
        printf("Employee has to pay %.2f extra on taxi.\n", taxiFees_extra);
    }

    else if (taxiFees_extra = 0) {
        printf("Employee used the exactly max taxi fees %.2f.\n", taxiFees_extra);
    }

    else {
        printf("Employee saved %.2f on Taxi.\n", taxiFees_extra);
    }
}

void parkingFeeDisplay(double parkingFees_extra) {
    if (parkingFees_extra < 0) {
        parkingFees_extra = 0 - parkingFees_extra;
        printf("Employee has to pay %.2f extra on parking.\n", parkingFees_extra);
    }

    else if (parkingFees_extra = 0) {
        printf("Employee used the exactly max parking fees %.2f.\n", parkingFees_extra);
    }

    else {
        printf("Employee saved %.2f on parking.\n", parkingFees_extra);
    }
}

void hotelFeeDisplay(double hotelFees_total) {
    if (hotelFees_total < 0) {
        hotelFees_total = 0 - hotelFees_total;
        printf("Employee has to pay %.2f extra on hotel.\n", hotelFees_total);
    }

    else if (hotelFees_total = 0) {
        printf("Employee used the exactly max hotel fees %.2f.\n", hotelFees_total);
    }

    else {
        printf("Employee saved %.2f on hotel.\n", hotelFees_total);
    }
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