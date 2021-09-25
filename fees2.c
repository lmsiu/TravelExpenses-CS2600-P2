// Meal function definitions for Issue #2 by Isaac
#include <stdio.h>
#include "header.h"

double getTotalMealCost() {
    double cost;

    printf("How much did you spend on meals in total?\n (Ex: 0.0, 25.99, etc.): ");
    scanf("%f", cost);

    cost = checkIfNegative(cost);
    return cost;
}

double getBreakfastAmount(int days, int arr, int dep) {

}

double getLunchAmount(int days, int arr, int dep) {

}

double getDinnerAmount(int days, int arr, int dep) {

}