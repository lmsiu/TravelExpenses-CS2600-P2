// Meal function definitions for Issue #2 by Isaac
#include <stdio.h>
#include "header.h"

double getTotalMealCost(double mealCost) {
    while ((getchar()) != '\n'); // Clear input buffer
    checkIfNegative(mealCost);
    return mealCost;
}

double getBreakfastAmount(int tripLength, int arrival_time, int departure_time) {
    int daysAllowed = tripLength;
    
    if (departure_time >= 700) {
        daysAllowed -= 1;
    }
    if ((tripLength > 1) && (arrival_time < 800)){
        daysAllowed -= 1;
    }

    return daysAllowed * 9;
}

double getLunchAmount(int tripLength, int arrival_time, int departure_time) {
    int daysAllowed = tripLength;
    
    if (departure_time >= 1200) {
        daysAllowed -= 1;
    }
    if ((tripLength > 1) && (arrival_time < 1300)){
        daysAllowed -= 1;
    }

    return daysAllowed * 12;
}

double getDinnerAmount(int tripLength, int arrival_time, int departure_time) {
    int daysAllowed = tripLength;
    
    if (departure_time >= 1800) {
        daysAllowed -= 1;
    }
    if ((tripLength > 1) && (arrival_time < 1900)){
        daysAllowed -= 1;
    }

    return daysAllowed * 16;
}

double getRoundTripCost(double tripCost) {
    while ((getchar()) != '\n'); // Clear input buffer
    checkIfNegative(tripCost);
    return tripCost;
}

//display function
void mealFeeDisplay(double mealFees_extra) {
    if (mealFees_extra < 0) {
        mealFees_extra = 0 - mealFees_extra;
        printf("Employee has to pay %.2f extra on meal.\n", mealFees_extra);
    }

    else if (mealFees_extra = 0) {
        printf("Employee used the exactly max meal fees %.2f.\n", mealFees_extra);
    }

    else {
        printf("Employee saved %.2f on meal.\n", mealFees_extra);
    }
}