// Name : LOH CHEE LING  Matric : B032610196
// Program : Exercise 5 Lab 4

#include <iostream>
using namespace std;

/* 
BEGIN
 READ hour(0-23)
 IF hour >= 23 OR hour <6 THEN
    DISPLAY "Late entry:sign the log book"
    DISPLAY "Show your matric card"
 ELSE
     DISPLAY "Welcome back"
 ENDIF
 DISPLAY "Good night"
END
*/

    int main()
{ 
    int hour;
    
    cout << "Enter hour: ";
    cin >> hour;

    if (hour >= 23 || hour < 6 )
    {
        cout << "Late entry:sign the log book" << endl;
        cout << "Show your matric card" << endl;
    }
    else
    {
        cout << "Welcome back" << endl;
    }

    cout << "Good night" << endl;
    return 0;
}

/*
Test 1: Branch: No
Enter hour: 22
Welcome back
Good night

Test 2: Branch: Yes
Enter hour: 23
Late entry:sign the log book
Show your matric card
Good night

Test 3: Branch: Yes
Enter hour: 0
Late entry:sign the log book
Show your matric card
Good night

Test 4: Branch: Yes
Enter hour: 5
Late entry:sign the log book
Show your matric card
Good night

Test 5: Branch: No
Enter hour: 6
Welcome back
Good night
*/