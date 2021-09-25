#ifndef HEADER

//Please change/update as needed
#define HEADER
double getCarRentalFees();
double getConfrenceandSeminarFees();
double getParkingFees(int tripLength);
double getParkingFeesCovered(int tripLength);
double getMilesDrivenCompensation();
double getHotelExpenses(int tripLength);
double getHotelExpensesCovered(int tripLength);

double getTotalMealCost();
double getBreakfastAmount(int days, int arr, int dep);
double getLunchAmount(int days, int arr, int dep);
double getDinnerAmount(int days, int arr, int dep);
double getRoundTripCost();

double checkIfNegative(double value); 
#endif