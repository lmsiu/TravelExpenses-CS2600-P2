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

double getBreakfastAmount();
double getLunchAmount();
double getDinnerAmount();
double getRoundTripCost();

double checkIfNegative(double value); 
#endif