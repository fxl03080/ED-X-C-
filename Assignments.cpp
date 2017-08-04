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

