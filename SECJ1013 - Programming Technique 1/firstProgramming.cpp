//This program demonstrate basic C++ input and output
//It uses varriable, identifiers, cin, and cout

#include <iostream> // We need this preprocessor directive to use cin and cout
using namespace std; //This namespace tells that we are using the standard namespace

int main() {
    // We must define variable before using it
    string firstName;
    int userAge;
    double favouriteNum;
    char lastNameInitial;

    //Alaways display a prompt using cin
    cout << " Enter your first name: ";
    cin >> firstName;

    cout << " Enter your age: ";
    cin >> userAge;

    cout << " Enter your favourite number (can be in decimal): ";
    cin >> favouriteNum;

    cout << " Enter your first initial of your name: ";
    cin >> lastNameInitial;

    //Display a bkank line for spacing
    cout << "\n--- Your Profile Summary ---" << "\n";
     
    //Display the stored values from the variables
    cout << "Name: \t\t" << firstName << "\n";
    cout << "Age: \t\t" << userAge << "\n";
    cout << "Favourite number: \t\t" << favouriteNum << "\n";
    cout << "Initial: \t\t" << lastNameInitial << "\n";

    //Send 0 back to OS to indicate success
    return 0;
}  
 