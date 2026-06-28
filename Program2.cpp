
/*
 DOCUMENTATION
 
 Accreditation: 
    Found at  https://cplusplus.com/forum/beginner/182128/ for the idea of use cin.clear() 
    and cin.ignore() to help flush standard input after malformed input to avoid unusal activity.
    
 Program Purpose:
    Converts temperature from Fahrenheit to Celsius and vice versa.

 Classes: none

 Variables:
        inptDec - input integer from stand input
        result - integer resulting after temperature conversion
        inptChar1 - Character to decide whether its Celsius or Fahrenheit conversion
        inptChar2 - character variable to decide to quit the program
        inptFail - Character that is stored if malformed input is detected will re-run program
*/

/*
 TEST PLAN
 
 Normal case:
    Please enter your temperature:22

    Please enter the units (F/C):C

    A temperature of 22 degrees Celcius is equivalent to 71 Fahrenheit
    Do you want another conversion?

 Bad Data case 1 (Character instead of integer input):
    This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    Please enter your temperature:ASD
    Please enter valid input and try again
    There was an issue with user input, re-running
    This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    Please enter your temperature:
 
 Bad Data case 2 (Integer instead of character/string input):
    This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    Please enter your temperature:33

    Please enter the units (F/C):123

    Please follow the directions and enter either (C) for celcius or (F) Fahrenheit
    Do you want another conversion?This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    Please enter your temperature:Do you want another conversion?
 
 Bad Data case 3 (floating point input)
    Please enter your temperature:2.2
    Do you want another conversion?This program converts Temperatures from Fahrenheit to Celsius and vice versa.
    Please enter your temperature:Do you want another conversion?
 
 Discussion:
    This program only accepts integer input for temperature
    This program only accepts character input for Celsius or Fahrenheit
 
*/

#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main () 
{
    int inptDec, result;
    char inptChar1, inptChar2, inptFail;
    string endProg;
    inptFail = 'y';
    while (endProg != "quit") {
        std::cout << "This program converts Temperatures from Fahrenheit to Celsius and vice versa." << endl;
        std::cout << "Please enter your temperature:" << ends;
        std::cin >> inptDec;


        while (inptFail == 'y') {
            

            if (cin.fail()) {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                std::cout << "Please enter valid input and try again" << endl;
                inptDec = 0;
                break;
            }
            else {
                std::cout << endl;
                std::cout << "Please enter the units (F/C):" << ends;
                std::cin >> inptChar1;
                std::cout << endl;
                if (tolower(inptChar1) == 'c') {
                    result = (inptDec * 9/5) + 32;
                    std::cout << "A temperature of " << inptDec << " degrees Celcius is equivalent to " << result << " Fahrenheit" << endl;
                }
                else if (tolower(inptChar1) == 'f') {
                    result = (inptDec - 32) * 5/9;
                    std::cout << "A temperature of " << inptDec << " degrees Fahrenheit is equivalent to " << result << " Celcius" << endl;
                }
                else if (towlower(inptChar1) == 'n') {
                    endProg = "quit";
                }
                else {
                    std::cout << "Please follow the directions and enter either (C) for celcius or (F) Fahrenheit" << endl;
                }
                inptFail = 'n';
            }
        }
        
        if(inptFail == 'y') {
            cout << "There was an issue with user input, re-running" << endl;
            inptChar2 = 'y';
        }
        else {
            std::cout << "Do you want another conversion?";
            std::cin >> inptChar2;  
            if (tolower(inptChar2) == 'n') {
                endProg = "quit";
            }
        }   
    }
    return 0; 
}
