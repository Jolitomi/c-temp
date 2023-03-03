# c-temp
A temperature converter

It allows users to convert temperatures from one unit of measurement to another, such as Celsius, Fahrenheit, and Kelvin. 

First, we created methods to store each formulars for convertion. 
These units for temp are floating point numbers.
Then we initialised variable for storing temp and result.
Then we asked the user for a temperature number.
A list of conversions(from celsius to fahrrenheit, kelvin to celsius,....) that can be carried out are printed unto the screen.
The user is promted for a choice of conversions, which are listed from 1-6 respectively.
By using a switch case, we switched to a case where we could find and print the equivalent of the two unknown unit.
Then the value of the unknown temperature conversion is printed.
Find the value of the other two units using mathematical calculations.
If temperature is given in kelvin, then calculate celsius and fahrenhiet using below formula

Celsius = (Kelvin – 273.15);
Fahrenhiet = (Kelvin -273.15) *9/5 + 32.0;
If the temperature is in Fahrenheit, use the following formulas to calculate Celsius and Kelvin.

Kelvin = (Fahrenhiet – 32.0) * 0.555555 +273.15;
Celsius = (Fahrenhiet – 32.0) * 0.555555;
If the temperature is in Celsius, use the following formulas to calculate Fahrenheit and Kelvin.

Kelvin = (Celsius + 273.15);
Fahrenhiet = (Celsius * 1.8) + 32.0;
