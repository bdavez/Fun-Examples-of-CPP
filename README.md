# Fun-Examples-of-C-
Variety of C++ Program Examples I created

Program 1 

Purpose: Create a program that prints out the multiplication times tables 

In pseudo code it would look something like 

Initialize var  
Var would equal 1 

For loop up to 12 

Print var 
Use a for loop to 12 (nested loop)
Print out var multiplied by i (iterator) 

After loop is completed return to outer loop
Print new line
increase var + 1 

Notes: 
Initially I considered the cleanest way of writing the program would be using a loop to loop from 1 to 12. Then by one variable to store the first number of the row, having the number then be added to itself in each row. I would implement an iterator to increase the variable after it would finish printing out that row. 


When writing out the program I noticed the basic functionality was working correctly, I just needed to adjust formatting of the ‘|’ character being used.  So I ended up using if else statements adding an extra blank space in order to help with offsetting things cleaner.

Overall this was a good first C++ program to start off. I did not have any issues creating except for the small annoyance of formatting things to look good. 






Program 2 

Purpose: Create a program that converts fahrenheit to celsius and vice versa 

The formula has already been provided for the conversion process it is:

Formula:

T(F) = (T(C) * 9 / 5) + 32
T(C) = (T(F) – 32 ) * 5 / 9

My idea for pseudocode is:

Print enter number 
Capture input and save to variable
Print option F/C 
Capture character and convert to lowercase

Use if statement to check if it is in celsius or fahrenheit 
Then execute one of two conversions, and save result to variable 
Print variable completion sentence

Have option to do another conversion 
end
Notes:
To start I wanted to capture user input, I referenced the Rooks guide to make sure I was doing that correctly. After I had the input capture in place I wanted to see if there was a way I could prevent the program from crashing if malformed input is used. During this process I was having issues with cin crashing and not being able to accept new buffer and would loop without accepting inputs, I managed to find a way to clear the buffer with a combination of built-in functions with cin.clear() and cin.ignore(100, ‘\n’) [To be used with integers] which I found reference to at https://cplusplus.com/forum/beginner/182128/
When I combined these two together I managed to clear out the malformed input and restart the loop. 

Then I built out the rest of the program inside a while loop. Following basic input, I used an if-else statement block to decide which choice the user would like to make. I ensured to use the toLower() built in function to simplify the exact matching of input into the if-else statement. The rest was easy just had a variable store the result of Celsius/Fahrenheit conversion. Then standard print out the result. 


Overall this program offered a slight hurdle when considering malformed input. The rest of the program went fairly smoothly, a good introduction to conditional logic as well as loops.
Program 3 

Pseudocode: 
Set variable for fahrenheit
Set variable for celsius

While loop
Output - fahrenheit to celsius conversion formula
Output - celsius to fahrenheit conversion formula
Add 5 to celsius 
Add 5 to fahrenheit

Notes:
I ended up starting off by using two functions for temperature conversions either way, I’m thinking it would make more sense to have the methods return a double that is then incorporated into a printout statement. However it would seem to be possible just to use a void method with a built in print statement that is combined with some print statements in a loop for formatting the table. 

Then I created some variables to hold the starting place hold numbers for celsius and fahrenheit. Then created the table headers, some issues I had were with spaces so I decided to use the \t tab character to help organize some of the whitespace. 

I then created a while statement that ran until 455 is achieved by adding 5 to each variable after each iteration of the loop. The print statement in the loop used the functions converting each way. The issue I discovered is that some doubles would print decimals while others would out floats or in other words have the decimal places. I did a little bit of searching and found someone asking about setting fixed decimal places on stack overflow.
https://stackoverflow.com/questions/5907031/printing-the-correct-number-of-decimal-places-with-cout

This was accomplished by by using
cout << fixed;
cout << setprecision();


Overall I found the formatting output of this program slightly frustrating to look clean.   After that was addressed it was fairly straightforward as most of the work was already completed in a similar manner for Program 2. This was a good chance for me to start using functions for me. It allowed for the code to look a lot cleaner. 



Program 4 

Pseudocode:

While loop:
Capture input
Switch statement
Case 1: print out if information
Case 2: print out switch information
Case 3: print out for information
Case 4: print out while information

Notes: 
I started off the program by creating a single cout statement using \n to create new line breaks on the program output.  

I then created a switch statement, the switch statement uses a single character to decide the decision for each case. I decided to capture the user input as a character as well to avoid malformed input crashes within the program. So even if the user were to enter 1234, it would still recognize the first character only and drop the rest of the string to avoid a crash. 

Within the switch statement if someone decides to enter an input that is not within the selection of choices the switch statement will then default out a statement explaining for the user to only use the choices provided by the program. 

I didn't run into any sort of issues when developing this program due to the restrictions of using a single character capture compared to strings or integers which if malformed input is used could crash the program. 

Chapter 7.3 - think c - talks about extracting first character from a string var[1]

I was able to use this with, user input.length in an if statement to detect if there was more than one character entered then notify the user of the issue. 

Overall a fairly simple example of using loops with user input. I found that to avoid malformed input it was easier in this case if the switch statement keeps all decisions as a character instead of integer. When the input string is saved it's possible to just get the first character instead of having type conversions from string to integer. 








Program 5

Pseudocode:

list1 variable

For loop
forloop
Calculate prime number from iterator from loop 1 and 2
Store in list1


Notes: 
I started off by creating a list to store the prime numbers. Then created two for loops. The outer or first for loop is decreasing by one each time, this is the iterator I’m keeping an eye on to store to the main list. The inner for loop is incrementing by one each time. Then I made a separate for loop to read out the contents of list 1. 

The first issue I had was there were multiple instances of the same numbers being printed. So I developed a secondary list known as list 2 as a temporary list. If the temporary list only contains 1 instance while going through all possibilities then its added into list1. This cleared up all issues. 

Program 6 


I started off by referencing the Rooks Guide and double checked I had the correct syntax for opening and reading files. I wanted to make sure that the program did not crash if malformed input was used. I double checked the builtin functions for I/0 with <fstream> and noticed it had a fail() method. So if I used a quick if statement to determine if malformed input is used, if it is it will gracefully exit the program after displaying the error. 

The next thing I determined was how I was going to store the whitespace. I figured the best way was to use a counter variable for each time a whitespace is detected it will increase the counter by 1.

Next I used a while loop with get() to check and make a comparison to a space(‘ ‘) character. If a space character is determined it would increase the counter by 1. Finally after it's done going through the text file I made sure that I closed the file stream with close(). Then printed out the results.

Overall I found no issues when developing this program. I found that the Rooks guide had all the information I needed. I noticed that the built-in function for fstream which was fail() was very useful and made things quick for malformed inputs.  

Program 7

This program was very straightforward. I started up by doing basic malformed input hardening. Then I ended up starting off the program by using the getline() function. I thought about it for a while and thought that the best course of action would be to use getline() then run that line through a loop and scan each character for the end of line escape character (\n). 

In order to implement the character scan of each line I just had to make a comparison with an if statement. Then when it hits the end of line it will read out the line variable. 

Overall quick program to write out. I found it useful to be able to use the infile stream to scan through a document one character at a time. 

Program 8

I realized that in this particular problem most of the information is stored in a class. So I started off by working within the TextFileReader class. Within the constructor, I decided to have it open the file. Following which I use two loops. The first loop was for getting a line within the document; the second loop would scan through the document and store each word up to a space. 

An issue I came across when reading the document is that the \r return character was being saved into my strings. When I went to read it back it would break the output. To resolve this I ended up putting in an if statement that would replace the temp variable with a space instead in order to avoid any issues. 

Next I ensured that the infile was closed. Then decided to build out two functions, would loop through the array of strings that contained the text from the input file. It would save these strings into one big string that is called in a print out statement. The other function has a loop and simply prints out Line# followed by the string array value. 

Overall I did not mind working on this program. The biggest issue I noticed was having the \r character getting saved in with the string variables. I found the way to remove it so its never in the variables which made the rest of the program development very straightforward. 

Program 9

I came across no issues when working with this program. I made 4 loops, one for each of the 3 arrays of floats then one to print out the results of array 3. I made sure to include the <cmath> library which has a built-in function for powf() a special function call for squaring floats. After I had the first two arrays loaded up with their values I ended up adding them together in the third loop. Following that I ensured the fourth loop was printing out the counter plus the array information. 

Overall I found that this program went by pretty quickly. Things to remember are, a quick way to loop through an array is to use a for loop then at that point it's possible to use the iterator variable to access each array object then walk through the array.  Finding the built-in powf() function for the cmath library really made this program quick to develop. 

Program 10

I started off by creating the main class called Book. The Book object contains the 6 descriptive string about the book. I made sure to include the get/set functionality which includes a print out statement. 

Following that I created a class called BookShelf, that contained an array of 12 books. The book objects within this class were stored in a main function. At the end of the main function I had it loop through the array of books and print out the description for each one. 

The biggest issue I had with the class BookShelf was the sort functionality. I tried using built-in function for string compare but I believe that might just be for string length. I took some time and thought about it alot on how I would approach this issue. 

I believe that for the sort function it should start of by grabbing each character from the string and converting it to its ASCII decimal then because the ASCII decimal ordered you could compare the integer between the two. Then loop through the comparison, then loop through the book object array. I did get very frustrated that I did not think of that result sooner as I wasted many countless hours trying different ways to sort out the descriptions and books. 

Overall I did not mind this assignment. It offered a challenge in regards to sorting the books, and allowed for me to learn some cool tricks with object arrays. The rest of the programming went by fairly quickly. 


I will say that another issue I had is that I accidently had the list stored in a loop before print, I just ensured the list was relocated to the correct scope outside of the loop. 

Overall I found this program slightly more challenging, I was not thrown off by the nested loop I just had to take some time on how to consider removing any chance of doubles in the main list. It was a good example on how to print out a list using a loop though. 
