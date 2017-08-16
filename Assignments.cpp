/* Assignment One */
/* Choosing Data Types

The data type chosen for your variables in a program should represent the type of information that will be used. When choosing a data type, such as int or string, careful consideration is required to ensure your application will handle the data entered by a user with the following aspects in mind:

Range - specifically for numeric values
Format- numeric or character data for zip/postal codes as an example
Internationalization - consideration for character set support

Using these considerations, select what you feel are the appropriate data types for the following:

First Name
Street Address
Birth Date
Zip/Postal Code
Bank Account Balance
Months of the Year

Enter your selected data types for these along with rationale for why you chose them.

Evaluate at least 2 of your peers providing feedback on their choices.

This is an opportunity to explore and learn more about data types and isn't a right vs wrong peer assessment. 
Participation means you get points for this assessment. */
// std::String firstName; names are usually strings
// std::String streetAddress; addresses are usually strings
// struct birthday; object defined for a birthday
// int zipCode []; array containing digits for zip code
// double bankAccoutBalance; double to keep track out to 2 decimal places for a balance
// enum months {...}; enum for hardcoded values for months


/* In this first response, please paste your code that implements an array. Your array should follow these guidelines:

Store int data types
Store 10 values
Have an appropriate name
Be initialized in the declaration statement */

int arrayOfSizeTen[10] = {1,2,3,4,5,6,7,8,9,10};


/* In this second response, please paste your code that implements an enumeration. Your enumeration should follow these guidelines:

Store the months of the year
Start the first element as 1 rather than 0
Use an appropriate name */

enum monthsOfYear { January = 1, February, March, April, May, June, July, August, September, October, November, December}; 


/* The scenario is that you have been asked to create a library of utility functions that support mathematical functions. 
You will add this code to functions in the next module but for now, write code to complete the following:

Using a for loop, write code that will compute the result of an int raised to the power of another int. 
For example, your for loop should use two variables, one for the base and one for the exponent. 
It should then calculate the base raised to the exponent. 
2 raised to the power of 2 should output 4, 2 raised to 8 should output 256, etc. 
Ensure your code meets these requirements and then paste it in the response section below:

Contains a variable for the base
Contains a variable for the exponent
Uses a for loop to perform the power function
Outputs the result to the console window */
int w = 8;
for (int i {0}; i < w; i ++) {
 cout << power(i, w);
}


/* For this second response, you will create a switch statement. The switch statement should include the following:

A variable of type char for the comparison
The switch statement should check for the value of 'y' (lowercase) or 'Y' (uppercase) and output the response 
"You chose y or Y" to the console window
The switch statement should check for the value 'n' or 'N' and output the response, 
"You chose n or N" to the console window
The switch statement should include the correct component that will output 
"You didn't choose a valid option" if neither of these two previous conditions are true */ 
char equalSign = '==';
switch(1) {
  case 'y'+equalSign+'Y': cout << 'You chose y or Y'; break;
  case 'n'+equalSign+'N': cout << 'You chose n or N'; break;
  default: cout << 'You didn\'t choose a valid option'; break;
}


/* In the previous module, you created a for loop to calculate a base raised to an exponent. 
In this peer review, you are going to put that code into a function and create two more functions. 
Paste your code in the response section below that satisfies these requirements:

Create a function called pow that accepts two integers that represent the base and the exponent. 
The exponent should not permit negative values. 
Use the code you created in the previous module for some of this functionality but add additional code
The additional code should make use of an if statement to check the exponent value. If it is 0, then 
immediately return 1 otherwise calculate the power and return the result.
Show sample code that will call the function and get the result.

For the second function you will compute the sine of an angle. 
Your function should accept the opposite and hypotenuse lengths and return the sine value. 
The formula for sine is:

sin = opposite / hypotenuse

where / is used to denote division

Ensure that you paste the code for the function as well as the code that calls the function and assigns the value to a variable. */
int pow (int base, int exponent) {
 if (exponent == 0) {
  return 1;
 }
 int power = 1;
 for (int i = 0; i < exponent; ++i) {
  power *= base;
 }
 return power;
}

int main() {
 int base = 5;
 int exponent = 10;
 x = pow(5,10);
 printf("The power: %li", x);
}
