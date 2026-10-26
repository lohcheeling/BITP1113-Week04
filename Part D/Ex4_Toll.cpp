// Name : LOH CHEE LING  Matric : B032610196
// Program : Exercise 4 Lab 4

#include <iostream>
#include <iomanip>
using namespace std;

/* 
IF  car_balanceRM >= toll_amount THEN
    new_balance = card_balanceRM - toll_amount
    Display "Gate open"
    Display new_balance
ELSE
    shortfall = toll_amount - card_balanceRM
    Display "Insufficient balance.Please reload."
    Display shortfall
ENDIF
*/
    

int main()
{

    cout << fixed << setprecision(2); 
    
    double card_balanceRM;
    double toll_amount;

    cout << "Card balance : RM  ";
    cin >> card_balanceRM;
    cout << "Toll amount : RM ";
    cin >> toll_amount;

    double new_balance = card_balanceRM - toll_amount;
    double shortfall = toll_amount - card_balanceRM;

    if (card_balanceRM >= toll_amount )
    {
        cout << "Gate open" << endl;
        cout << "New balance : RM " << new_balance << endl;
    }
    else
    {
        cout << "Insufficient balance.Please reload." << endl;
        cout << "Shortfall : RM " << shortfall << endl;
    }
    return 0;
}

/*TEST RESULT

Test 1:
Card balance : RM  10
Toll amount : RM 5.30
Gate open
New balance : RM 4.70

Test 2:
Card balance : RM  5.30
Toll amount : RM 5.30
Gate open
New balance : RM 0.00

Test 3:
Card balance : RM  5.29
Toll amount : RM 5.30
Insufficient balance.Please reload.
Shortfall : RM 0.01

Test 4:
Card balance : RM  0.00
Toll amount : RM 2.10
Insufficient balance.Please reload.
Shortfall : RM 2.10

*/