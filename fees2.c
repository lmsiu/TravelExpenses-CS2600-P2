// Meal function definitions for Issue #2 by Isaac
#include <stdio.h>
#include "header.h"

double getTotalMealCost() {
    double cost;

    printf("How much did you spend on meals in total? (Ex: 0.0, 25.99, etc.): ");
    scanf("%lf", &cost);

    while ((getchar()) != '\n'); // Clear input buffer

    cost = checkIfNegative(cost);
    return cost;
}

double getBreakfastAmount(int days, int arr, int dep) {
    int daysAllowed = days;
    
    if (dep >= 700) {
        daysAllowed -= 1;
    }
    if ((days > 1) && (arr < 800)){
        daysAllowed -= 1;
    }

    return daysAllowed * 9;
}

double getLunchAmount(int days, int arr, int dep) {
    int daysAllowed = days;
    
    if (dep >= 1200) {
        daysAllowed -= 1;
    }
    if ((days > 1) && (arr < 1300)){
        daysAllowed -= 1;
    }

    return daysAllowed * 12;
}

double getDinnerAmount(int days, int arr, int dep) {
    int daysAllowed = days;
    
    if (dep >= 1800) {
        daysAllowed -= 1;
    }
    if ((days > 1) && (arr < 1900)){
        daysAllowed -= 1;
    }

    return daysAllowed * 16;
}

double getRoundTripCost(double tripCost) {
    while ((getchar()) != '\n'); // Clear input buffer

    tripCost = checkIfNegative(tripCost);
    return tripCost;
}