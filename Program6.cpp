/*
 DOCUMENTATION

 Program Purpose:
    A program that opens a file and counts the whitespace-separated words in that file.

 Classes: none

 Variables:
    fInpt - string containing the file name from standard input
    tempChar - temperary character that that scans a character from file input that is used to determine if it is a space or not
    counter - a integer value that stores plus 1 everytime a space character is determined
    inFile - file stream that is set to read 
*/

/*
 TEST PLAN
 
 Normal case:

    Please enter the file you wish to open: excerpt.txt
    The number of whitespaces is: 331


 Bad Data case 1 (Malformed input):


    Please enter the file you wish to open: @#$@#$%
    File not found or unable to open

 
 Bad Data case 2 (Integer instead of character/string input):


    Please enter the file you wish to open: 42314234
    File not found or unable to open

 
 Bad Data case 3 (floating point input)

    Please enter the file you wish to open: 2.2345234
    File not found or unable to open

 
 Discussion:
    This program uses input from the user to reference a text doucment to load in
    After text document is loaded in it will read out all the space characters(Whitespace) within the text document
 
*/
#include <iostream>
#include <fstream>

using namespace std;

int main () 
{
    string fInpt;
    char tempChar;
    int counter = 0;
    cout << "Please enter the file you wish to open: " << ends;
    cin >> fInpt; 

    ifstream inFile(fInpt);

    if (inFile.fail()) {
        cerr << "File not found or unable to open" << endl;
        exit(1);
    }
    while(inFile.get(tempChar)) {
        if (tempChar == ' ') {
            counter++;
        }
    }
    inFile.close();
    cout << "The number of whitespaces is: " << counter << endl;
    return 0;
}