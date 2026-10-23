// Name : LOH CHEE LING  Matric : B032610196
// Program : Exercise 3 Lab 4

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double parcelWeight;
    double baseFee = 8.00;  // RM per parcel
    double Fee = baseFee;             // RM 

    cout << "Enter parcel weight (kg): ";
    cin >> parcelWeight;

    if (parcelWeight > 2.0)
    {
        Fee = baseFee + 5.00;
        cout << "Heavy parcel: RM 5.00 surcharge added" << endl;
    }
    
    cout << "Fee (RM) :" << Fee << endl;
    return 0;
}
/* 
   Enter parcel weight (kg): 1.5
   Fee (RM) :8.00

   Enter parcel weight (kg): 2.0
   Fee (RM) :8.00

   Enter parcel weight (kg): 2.1
   Heavy parcel: RM 5.00 surcharge added
   Fee (RM) :13.00

   Enter parcel weight (kg): 7.25
   Heavy parcel: RM 5.00 surcharge added
   Fee (RM) :13.00
   */