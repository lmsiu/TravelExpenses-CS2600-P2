#ifndef HEADER

//Please change/update as needed
#define HEADER
int tripLength;
int arrival_time;
int departure_time;

double getCarRentalFees();
double getConfrenceandSeminarFees();
double getParkingFees(int tripLength, double parkingFees);
double getParkingFeesCovered(int tripLength);
double getTaxiFees(int tripLength, double taxiFees);
double getTaxiFeesCovered(int tripLength);
double getMilesDrivenCompensation();
double getHotelExpenses(int tripLength, double hotelExpenses);
double getHotelExpensesCovered(int tripLength);

double getTotalMealCost();
double getBreakfastAmount(int days, int arr, int dep);
double getLunchAmount(int days, int arr, int dep);
double getDinnerAmount(int days, int arr, int dep);
double getRoundTripCost();

double checkIfNegative(double value); 
#endif