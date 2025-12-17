// NURAIN NABILAH BINTI AZMAN
// A25CS0324
// 11 NOVEMBER 2025
// SET 2


#include <iostream>
using namespace std;

int main (){
    int number, sum=0, digit, originalNumber ;

    cout << "Enter an integer number: ";//prompt user to input the number
    cin >> number;

    originalNumber = number;

    while (number != 0){

        digit = number % 10;
        cout << digit ;
        if (number / 10 > 0){
            cout << " + " ;
        }

        sum = sum + digit;
        number = number / 10;

    }

    cout << " = " << sum << endl;

    if (sum % 2 == 0)
        cout << sum << " is even number" ;
    else
        cout << sum << " is odd number" ;
    
    if ( sum % 4 == 0){
        cout << " & multiples of 4 ";
    }

    if ( sum % 5 == 0 ){
        if (sum % 4 == 0 )
            cout << "and 5 ";
        else 
            cout << " & multiples of 5";
    }

    
    return 0;

}