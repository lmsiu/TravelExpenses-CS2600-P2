#include <stdio.h>
#include "header.h"

double getCarRentalFees(){
    double carRentalFees;
    printf("How much were car rental fees (if none enter 0.0) in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
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

double getParkingFees(){

}

double getMilesDriven(){

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