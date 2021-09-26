#ifndef HEADER

//Please change/update as needed
#define HEADER
int tripLength;
int arrival_time;
int departure_time;

double getCarRentalFees();
double getConferenceandSeminarFees(double conferenceFees);
double getParkingFees(double parkingFees);
double getParkingFeesCovered(int tripLength);
double calculateParkingFees(double parkingFees, double maxParkingFees);
double calculateTaxiFees(double TaxiFees, double maxTaxiFees);
double getTaxiFees(double taxiFees);
double getTaxiFeesCovered(int tripLength);
double getMilesDrivenCompensation(double milesFee);
double getHotelExpenses(double hotelExpenses);
double getHotelExpensesCovered(int tripLength);

double getTotalMealCost();
double getBreakfastAmount(int days, int arr, int dep);
double getLunchAmount(int days, int arr, int dep);
double getDinnerAmount(int days, int arr, int dep);
double getRoundTripCost();

void checkIfNegative(double value); 

//display functions
void parkingFeeDisplay(double parkingFees_extra);
void taxuFeeDisplay(double taxiFees_extra);
void hotelFeeDisplay(double hotelFees_extra);
void mealFeeDisplay(double mealFees_extra);

#endif