#include "fees1.c"
#include "fees2.c"

double tripCost, tripCost_total;
double carRentalFees, carRentalFees_total;
double miles, milesFee_total;
double parkingFees, parkingFees_total;
double taxiFees, taxiFees_total;
double hotelExpenses, hotelExpenses_total;


void func() {
    //store the basic information of the trip
    printf("How many days for this trip? ");
    scanf("%i", &tripLength);
    checkDays(tripLength);
    printf("What is your arriavl time (if your arrival time is 7, please enter 0700. If it is 1:30pm, then enter 1330)? ");       
    scanf("%i", &arrival_time);
    printf("What is your departure time (if your arrival time is 7, please enter 0700. If it is 1:30pm, then enter 1330)? ");
    scanf("%i", &departure_time);
    printf("Total days of your trip is %d. Arrival time is %d, departure time is %d.", getDaysonTrip(), getArrivalTime(), getDepartureTime());

    //store the amount of any round-trip airfare
    printf("How much did the roundtrip cost (Ex: 0.0, 25.99, etc.): ");
    scanf("%lf", &tripCost);
    tripCost_total = getRoundTripCost(tripCost);

    //store the amount of any car rentals
    printf("If you rented a car, how much were car rental fees (if none enter 0.0) in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &carRentalFees);
    carRentalFees_total = getCarRentalFees(carRentalFees);

    //store the vehicle expense
    printf("If you used a private vehicle, how many miles did you drive (Enter 0.0 if a private vehical was not used). Please enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &miles);
    milesFee_total = getMilesDrivenCompensation(miles);

    //store the parking fees
    printf("How much did you spend on parking fees in total? Enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99). Please note you will only be compensated $6.00 per day. (Enter 0.0 if none)\n");
    scanf("%lf", &parkingFees);
    parkingFees_total = getParkingFees(tripLength, parkingFees);

    //store the taxis fees
    printf("How much did you spend on taxi fees in total? Enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99). Please note you will only be compensated $6.00 per day. (Enter 0.0 if none)\n");
    scanf("%lf", &taxiFees);
    taxiFees_total = getTaxiFees(tripLength, taxiFees);

    //store the hotel fees
    printf("How much did you spend on hotel expenses in total? (Please enter 0.0 if none) Please enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &hotelExpenses);
    hotelExpenses_total = getHotelExpenses(tripLength, hotelExpenses);

    //store the total fee for the meal
    

}

int main(){
    func();   
    return 0;
}