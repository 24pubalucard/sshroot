2.Write C++ Program to find the day name of a week using switch statement

#include<iostream> 
using namespace std; 
int main()

{

int day;
cout<<"Program to print the day of week\n"; 
cout<<"Enter a number to print the day name"; 
cin>>day; switch(day)

{
case 1: cout<<"Sunday"; break;

case 2: cout<<"Monday"; break;

case 3: cout<<"Tuesday "; break;

case 4: cout<<"Wednesday "; break;

case 5: cout<<"Thursday "; break;

case 6: cout<<"Friday "; break; case 7: cout<<"Saturday "; break;

default: cout<<"Invalid Input";

}

return 0;

}