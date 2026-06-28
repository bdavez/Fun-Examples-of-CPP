
/*
 DOCUMENTATION

 Program Purpose:
    A program that opens a (text) file and displays the contents of that file one line at a time. 

 Classes: none

 Variables:
    fInpt - string containing the file name from standard input
    inFile - file stream that is set to read 
    temp - a string that temperarily stores information from getline() function
    arr[100] - an array of strings that stores each character up to a space (each word)
    total_str - string variable holding all the array strings after they were read to the array

*/

/*
 TEST PLAN
 
 Normal case:

    There was nothing so VERY remarkable in that; nor did Alice  think it so VERY much out of the way to hear the Rabbit say to  itself, `Oh dear!  Oh dear!  I shall be late!'  (when she thought  it over afterwards, it occurred to her that she ought to have  wondered at this, but at the time it all seemed quite natural);  but when the Rabbit actually TOOK A WATCH OUT OF ITS WAISTCOAT-  POCKET, and looked at it, and then hurried on, Alice started to  her feet, for it flashed across her mind that she had 
    Line #: 1 There
    Line #: 2 was
    Line #: 3 nothing
    Line #: 4 so
    Line #: 5 VERY
    Line #: 6 remarkable
    Line #: 7 in
    Line #: 8 that;
    Line #: 9 nor
    Line #: 10 did
    Line #: 11 Alice 
    Line #: 12 think
    Line #: 13 it
    Line #: 14 so
    Line #: 15 VERY
    Line #: 16 much
    Line #: 17 out
    Line #: 18 of
    Line #: 19 the
    Line #: 20 way
    Line #: 21 to
    Line #: 22 hear
    Line #: 23 the
    Line #: 24 Rabbit
    Line #: 25 say
    Line #: 26 to 
    Line #: 27 itself,
    Line #: 28 `Oh
    Line #: 29 dear!
    Line #: 30 
    Line #: 31 Oh
    Line #: 32 dear!
    Line #: 33 
    Line #: 34 I
    Line #: 35 shall
    Line #: 36 be
    Line #: 37 late!'
    Line #: 38 
    Line #: 39 (when
    Line #: 40 she
    Line #: 41 thought 
    Line #: 42 it
    Line #: 43 over
    Line #: 44 afterwards,
    Line #: 45 it
    Line #: 46 occurred
    Line #: 47 to
    Line #: 48 her
    Line #: 49 that
    Line #: 50 she
    Line #: 51 ought
    Line #: 52 to
    Line #: 64 quite
    Line #: 65 natural); 
    Line #: 66 but
    Line #: 67 when
    Line #: 68 the
    Line #: 69 Rabbit
    Line #: 70 actually
    Line #: 71 TOOK
    Line #: 72 A
    Line #: 73 WATCH
    Line #: 74 OUT
    Line #: 75 OF
    Line #: 76 ITS
    Line #: 77 WAISTCOAT- 
    Line #: 78 POCKET,
    Line #: 79 and
    Line #: 80 looked
    Line #: 81 at
    Line #: 82 it,
    Line #: 83 and
    Line #: 84 then
    Line #: 85 hurried
    Line #: 86 on,
    Line #: 87 Alice
    Line #: 88 started
    Line #: 89 to 
    Line #: 90 her
    Line #: 91 feet,
    Line #: 92 for
    Line #: 93 it
    Line #: 94 flashed
    Line #: 95 across
    Line #: 96 her
    Line #: 97 mind
    Line #: 98 that
    Line #: 99 she
    Line #: 100 had  Line #: 53 have 
    Line #: 54 wondered
    Line #: 55 at
    Line #: 56 this,
    Line #: 57 but
    Line #: 58 at
    Line #: 59 the
    Line #: 60 time
    Line #: 61 it
    Line #: 62 all
    Line #: 63 seemed
    Line #: 64 quite
    Line #: 65 natural); 
    Line #: 66 but
    Line #: 67 when
    Line #: 68 the
    Line #: 69 Rabbit
    Line #: 70 actually
    Line #: 71 TOOK
    Line #: 72 A
    Line #: 73 WATCH
    Line #: 74 OUT
    Line #: 75 OF
    Line #: 76 ITS
    Line #: 77 WAISTCOAT- 
    Line #: 78 POCKET,
    Line #: 79 and
    Line #: 80 looked
    Line #: 81 at
    Line #: 82 it,
    Line #: 83 and
    Line #: 84 then
    Line #: 85 hurried
    Line #: 86 on,
    Line #: 87 Alice
    Line #: 88 started
    Line #: 89 to 
    Line #: 90 her
    Line #: 91 feet,
    Line #: 92 for
    Line #: 93 it
    Line #: 94 flashed
    Line #: 95 across
    Line #: 96 her
    Line #: 97 mind
    Line #: 98 that
    Line #: 99 she
    Line #: 100 had
 
 Discussion:
    This program has no user input
    After text document is loaded in it will break down each sentence into an arr of strings, then read it back to the user
 
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    float arr1[25];
    float arr2[25];
    float arr3[25];

    for(int i = 0; i < 25; i++) {
        arr1[i] = i;
    }

    for(int i = 0; i < 25; i++) {
        arr2[i] = powf(i, 2);
    }

    for(int i = 0; i < 25; i++) {
        arr3[i] = arr1[i] + arr2[i];  
    }

    for(int i = 0; i < 25; i++) {
        cout << "Counter: " << i+1 << " is " << arr1[i] << " + " <<  arr2[i] << " = " << arr3[i] << endl;
    }


}