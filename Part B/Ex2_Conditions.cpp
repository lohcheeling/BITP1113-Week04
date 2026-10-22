// Name : LOH CHEE LING  Matric : B032610196
// Program : Exercise 2 Lab 4
/* battery | charging | Saver on? | Range OK? |
     15          0         1           1
     15          1         0           1
     100         0         0           1
     150         0         0           0
     -5          1         0           0  */
/* TEST 1  Predictions: 11011       Real Output:11011
   TEST 2  Predictions: 10111       Real Output:10111
   TEST 3  Predictions: 00111       Real Output:00111
   TEST 4  Predictions: 00000       Real Output:00001
   TEST 5  Predictions: 10100       Real Output:10101
*/
        

#include <iostream>
using namespace std;

int main()
{
    //TEST 1
    int battery = 15 , charging = 0 ;
    cout << (battery < 20) << endl;
    cout << (battery < 20 && !charging) << endl;
    cout << (battery == 100 || charging) << endl;
    cout << (battery >= 0 && battery <= 100) << endl;
    cout << (0 <= battery <= 100 ) << endl; 
    cout << endl;
        
    //TEST 2
    battery = 15 ,charging = 1;
    cout << (battery < 20) << endl;
    cout << (battery < 20 && !charging) << endl;
    cout << (battery == 100 || charging) << endl;
    cout << (battery >= 0 && battery <= 100) << endl;
    cout << (0 <= battery <= 100 ) << endl; 
    cout << endl;

    //TEST 3
    battery = 100 ,charging = 0;
    cout << (battery < 20) << endl;
    cout << (battery < 20 && !charging) << endl;
    cout << (battery == 100 || charging) << endl;
    cout << (battery >= 0 && battery <= 100) << endl;
    cout << (0 <= battery <= 100 ) << endl; 
    cout << endl;

    //TEST 4
    battery = 150 ,charging = 0;
    cout << (battery < 20) << endl;
    cout << (battery < 20 && !charging) << endl;
    cout << (battery == 100 || charging) << endl;
    cout << (battery >= 0 && battery <= 100) << endl;
    cout << (0 <= battery <= 100 ) << endl; 
    cout << endl;

    //TEST 5
    battery = -5 ,charging = 1;
    cout << (battery < 20) << endl;
    cout << (battery < 20 && !charging) << endl;
    cout << (battery == 100 || charging) << endl;
    cout << (battery >= 0 && battery <= 100) << endl;
    cout << (0 <= battery <= 100 ) << endl;
    return 0;
}