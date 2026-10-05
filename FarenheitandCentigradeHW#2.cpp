//Chaston Davis
//The United Nations Weather Department - Geneva (UNWEDGE) has hired you to write a program to convert temperature information from the United States into metric for comparison with weather in Europe. Your program should ask the user for the temperature in degrees Farenheit. It should then report this information converted to degrees centigrade.

#include <iostream>
using namespace std;

int main()

{ int InputFarenheit, Centigrade;

cout<<"** Welcome to the UNWEDGE Weather Program **"<<endl;
cout<<"Please enter the temperature in degrees Fahrenheit"<<endl;
cin>>InputFarenheit;

Centigrade=(InputFarenheit-32)*5/9;

cout<<"The tempature is "<<Centigrade<<" degrees Centigrade."<<endl;
cout<<"Have a nice day!"<<endl;

return 0;

}

/* Sample run
thomas% a.out
** Welcome to the UNWEDGE Weather Program **
Please enter the temperature in degrees Fahrenheit
75
The tempature is 23 degrees Centigrade.
Have a nice day!
*/