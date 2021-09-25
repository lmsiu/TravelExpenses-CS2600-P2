#include <stdio.h>
#include "header.h"

int trip_days;
int arrival_time;
int departure_time;

int getDaysonTrip(){
    return trip_days;
}

int getArrivalTime(){
    return arrival_time;
}

int getDepartureTime(){
    return departure_time;
}

int main(){
    printf("How many days for this trip? ");
    scanf("%d", &trip_days);
    while ((getchar()) != '\n'); // Clear input buffer
    
    printf("What is your arriavl time (if your arrival time is 7, please enter 0700. If it is 1:30pm, then enter 1330)? ");
    scanf("%d", &arrival_time);
    while ((getchar()) != '\n'); // Clear input buffer
    
    printf("What is your departure time (if your arrival time is 7, please enter 0700. If it is 1:30pm, then enter 1330)? ");
    scanf("%d", &departure_time);
    while ((getchar()) != '\n'); // Clear input buffer

    double mealCost = getTotalMealCost();
    double breakExpense = getBreakfastAmount(trip_days, arrival_time, departure_time);

    printf("Breakfast expenses: %f\n", breakExpense);

    printf("Total days of your trip is %d. Arrival time is %d, departure time is %d.", getDaysonTrip(), getArrivalTime(), getDepartureTime());
    
    return 0;
}