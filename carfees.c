#include <stdio.h>
#include "header.h"

double getCarRentalFees(){
    double carRentalFees;
    printf("How much were car rental fees (if none enter 0.0) in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &carRentalFees);

    if(carRentalFees<0.0){
        printf("Car rental fees can't be less than 0. Please enter 0.0 if there were no car rental fees\n");
        scanf("%lf", &carRentalFees);
    }

    return carRentalFees;
}

double getConfrenceFees(){

}

double getParkingFees(){

}

double getMilesDriven(){

}

double getHotelExpenses(){

}
