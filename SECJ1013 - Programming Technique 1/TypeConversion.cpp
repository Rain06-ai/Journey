#include <iostream>
using namespace std;


int main (){
    
    char c = 'A'; cout << 6 + c << endl; //int

    int i = 25;
    cout << 6.1f + i << endl;//float

    int x, y=25; float z=2.5;
    x = y + z;//int
    cout << x << endl;

    int y1 = 50, y2 = 63, x1 = 30, x2 = 40;

    cout << y2 - y1 / x2 - x1 << endl;//it do the division first
    cout << (y2 - y1) / (x2 - x1) << endl;//it do the minus before division

    cout << "-----" << endl;//divider for the next question

    int kira = 5;
    int nilai_pertama = 10,  nilai_kedua;

    cout << kira << endl; //display number 5

    nilai_kedua = 5 * kira-- + nilai_pertama; //kira-- means the number is decrease by 1 after the calculation

    cout << kira << endl;//the new kira after the decrement = 4
    cout << nilai_kedua << endl;
    cout << kira << endl;//the same kira after the decrement = 4

    nilai_kedua = 5 * --kira + nilai_pertama;//--kira means the number is decrease by 1 before the calculation 

    cout << kira << endl;//the new kira after the decrement = 3
    cout << nilai_kedua << endl;

    cout << "----" << endl;//divider for the next question

    double m ;
    m = static_cast <double> ( y2- y1 )/(x2 - x1);//static_cast<double> is for the result to be in double 
    cout << "The values of m is: " << m << endl;

    char ch = 'C';
    cout << ch << " is " << (int)ch << endl;

    cout << "-----" << endl;

    int a=1;
    double d=1.0;

    a = 46/9; 
    cout << "a : " << a << endl;

    a=1;
    a = 46 % 9 + 4 * 4 - 2; 
    cout << "a : " << a << endl;

    a=1;
    a = 45 + 43 % 5 * (23 * 3 % 2); 
    cout << "a : " << a << endl;

    a=1;
    a %=3 / a + 3; 
    cout << "a : " << a << endl;

    a=1;
    d=1.0;
    d += 1.5 * 3 + (++a); 
    cout << "d : " << d << endl;

    a=1;
    d=1.0;
    d -= 1.5 * 3 + a++; 
    cout << "d : " << d << endl;
    

    return 0;
}

