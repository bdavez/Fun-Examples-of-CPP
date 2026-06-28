
/*
 DOCUMENTATION

 Program Purpose:
An interactive help system for C++ programming. 
The system will incorporate a menu system that interacts with the user, and the appropriate help topic will be displayed, based on an input selection.

 Classes: none

 Variables:
    opt - Stores a character of the user input
    qApp - Stores a character value dec
    usrinpt - Stores a string value of what the user entered
*/

/*
 TEST PLAN
 
 Normal case:

    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit
    4
    while: is a control structure that allows for repetitive execution of a block of code as long as a specified condition is true.
    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit


 Bad Data case 1 (Malformed input):

    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit
    @#$#$%!@
    Please enter a correct input with one character
    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit

 
 Bad Data case 2 (Integer instead of character/string input):

    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit
    adasd
    Please enter a correct input with one character
    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit

 
 Bad Data case 3 (floating point input)

    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit
    2.2
    Please enter a correct input with one character
    C++ Help Menu
    Select Help on: 
    1. If 
    2. Switch 
    3. For 
    4. While 
    x. Exit

 
 Discussion:
    This program uses input from the user to display help text depending on input
 
*/
#include <iostream>

using namespace std;

int main () 
{
    
    char opt, qApp;
    string usrinpt;
    while(qApp != 'q') {
        cout << "C++ Help Menu\nSelect Help on: \n 1. If \n 2. Switch \n 3. For \n 4. While \n x. Exit" << endl;
        cin >> usrinpt;

        if(usrinpt.length() > 1) {
            cout << "Please enter a correct input with one character" << endl;
        }
        else {
            opt = usrinpt[0];
            switch(opt) {
            case '1':
            cout << "if: " << ends;
            cout << "Is used for conditional execution of a block of code. It is used to execute a block of code if a certain condition is met." << endl;
            break;

            case '2':
            cout << "switch: " << ends;
            cout << " is a multiway branch statement that provides a way to organize the flow of execution to parts of code based on the value of an expression." << endl;
            break;

            case '3':
            cout << "for: " << ends;
            cout << " is defined as a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times." << endl;
            break;

            case '4':
            cout << "while: " << ends;
            cout << "is a control structure that allows for repetitive execution of a block of code as long as a specified condition is true." << endl;
            break;

            case 'x':
            cout << "exit" << endl;
            qApp = 'q';
            break;

            default:
            cout << "Please enter a correct input from the list of choices" << endl;
            }
        }
    }
 
    return 0;
}
