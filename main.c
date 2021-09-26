#include "fees1.c"
#include "fees2.c"

void func() {
    //variables
    double costTotal, maxCost;
    double tripCost;
    double carRentalFees;
    double milesFee;
    double parkingFees, parkingFees_extra;
    double taxiFees, taxiFees_extra;
    double hotelExpenses, hotelExpenses_extra;
    double conferenceFees;
    double mealCost, mealCost_extra, maxMealCost_total, mealCost_saved;

    //store the basic information of the trip
    printf("-------BASIC INFOR ABOUT THE TRIP------\n");
    printf("How many days for this trip? ");
    scanf("%i", &tripLength);
    checkDays(tripLength);
    printf("What is your arriavl time (if your arrival time is 7, please enter 0700. If it is 1:30pm, then enter 1330)? ");       
    scanf("%i", &arrival_time);
    printf("What is your departure time (if your arrival time is 7, please enter 0700. If it is 1:30pm, then enter 1330)? ");
    scanf("%i", &departure_time);
    printf("Total days of your trip is %d. Arrival time is %d, departure time is %d.\n", getDaysonTrip(), getArrivalTime(), getDepartureTime());

    //store the amount of any round-trip airfare
    printf("-------BASIC COST ABOUT THE TRIP------\n");
    printf("How much did the roundtrip cost (Ex: 0.0, 25.99, etc.): ");
    scanf("%lf", &tripCost);
    tripCost = getRoundTripCost(tripCost);

    //store the amount of any car rentals
    printf("If you rented a car, how much were car rental fees (if none enter 0.0) in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &carRentalFees);
    carRentalFees = getCarRentalFees(carRentalFees);

    //store the vehicle expense
    printf("If you used a private vehicle, how many miles did you drive (Enter 0.0 if a private vehical was not used). Please enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &milesFee);
    milesFee = getMilesDrivenCompensation(milesFee);

    //store the parking fees
    printf("How much did you spend on parking fees in total? Enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99). Please note you will only be compensated $6.00 per day. (Enter 0.0 if none)\n");
    scanf("%lf", &parkingFees);
    parkingFees = getParkingFees(parkingFees);

    //store the taxis fees
    printf("How much did you spend on taxi fees in total? Enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99). Please note you will only be compensated $6.00 per day. (Enter 0.0 if none)\n");
    scanf("%lf", &taxiFees);
    taxiFees = getTaxiFees(taxiFees);

    //store the hotel fees
    printf("How much did you spend on hotel expenses in total? (Please enter 0.0 if none) Please enter amount in dollar.cents format (if rental fees were $50.99, enter 50.99)\n");
    scanf("%lf", &hotelExpenses);
    hotelExpenses = getHotelExpenses(hotelExpenses);

    //store the conference and seminar fees
    printf("How much were the total conference and seminar fees? (Enter 0.0 if none)\n");
    scanf("%lf", &conferenceFees);
    conferenceFees = getConferenceandSeminarFees(conferenceFees);

    //store the meal fees
    printf("How much did you spend on meals in total? (Ex: 0.0, 25.99, etc.): ");
    scanf("%lf", &mealCost);
    mealCost = getTotalMealCost(mealCost);
    
    //calculate fees
    parkingFees_extra = calculateParkingFees(parkingFees, getParkingFeesCovered(tripLength));
    taxiFees_extra = calculateTaxiFees(taxiFees,  getTaxiFeesCovered(tripLength));
    maxMealCost_total = getBreakfastAmount(tripLength, arrival_time, departure_time)
                        + getLunchAmount(tripLength, arrival_time, departure_time)
                        + getDinnerAmount(tripLength, arrival_time, departure_time);
    mealCost_extra = maxMealCost_total - mealCost;
    hotelExpenses_extra = calculateHotelFees(hotelExpenses, getHotelExpensesCovered(tripLength));

    //display each fees
    printf("-------DISPLAY FEES SAVED OR EXTRA------\n");
    parkingFeeDisplay(parkingFees_extra);
    taxuFeeDisplay(taxiFees_extra);
    mealFeeDisplay(mealCost_extra);
    hotelFeeDisplay(hotelExpenses_extra);

    /*total fees*/
    //the total expenses incurred by the businessperson
    printf("-------DISPLAY THE CONCLUSION------\n");
    costTotal = tripCost + conferenceFees + carRentalFees + parkingFees
              + milesFee + taxiFees + conferenceFees + hotelExpenses + mealCost;
    printf("Employee spent %.2f on this trip.\n", costTotal);

    //the total allowable expenses for the trip
    maxCost = tripCost + conferenceFees + carRentalFees + getParkingFeesCovered(tripLength)
              + milesFee + getTaxiFeesCovered(tripLength) + conferenceFees + getHotelExpensesCovered(tripLength) + maxMealCost_total;
    printf("The max fee the employee can spend is %.2f.\n", maxCost);

    //he excess that must be reimbursed by the businessperson, if any.
    if (maxCost < costTotal) {
        printf("Employee has to pay %.2f extra on this trip", costTotal - maxCost);
    }
    //The amount saved by the businessperson if the expenses were under the total allowed.
    else if (maxCost > costTotal) {
                printf("Employee saved %.2f on this trip", maxCost - costTotal);
    }

}

int main(){
    //run the main function
    func();   
    return 0;
}