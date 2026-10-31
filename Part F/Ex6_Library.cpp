// Name : LOH CHEE LING  Matric : B032610196
// Program : Exercise 6 Lab 4

#include <iostream>
using namespace std;

int main ()
{
    int daysLate;
    double fine = 0.00 ;    //Bug is here, initialize fine = 0.00

    cout << "Days late: ";
    cin >> daysLate;

    if (daysLate > 0 )   //Bug is here, no need ;
        fine = daysLate * 0.50;

    if (daysLate == 0 )  //Bug is here,should use == not =
        cout << "Returned on time. No fine." << endl; 
    
    if (daysLate >= 14 )  //Bug is here,should be >= not >
    {
        cout << "Membership suspended." << endl;   //Bug is here,should add {}
        cout << "Contact the library counter." << endl;
    }
    
    cout << "Fine: RM" << fine << endl; 
}

/*
Days late: 0
Returned on time. No fine.
Fine: RM0

Days late: 1
Fine: RM0.5

Days late: 13
Fine: RM6.5

Days late: 14
Membership suspended.
Contact the library counter.
Fine: RM7

Days late: 15
Membership suspended.
Contact the library counter.
Fine: RM7.5
*/