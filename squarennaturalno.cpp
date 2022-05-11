3.Write C++ Program to find the sum of the squares of the first N natural numbers.

#include<iostream> 
using namespace std; 
int main()
{

 int i,n,sum=0;
 cout<<"Enter a number ";
 cin>>n; 
 for(i=0;i<n;i++)

    {
    
    sum=sum + i * i;
    
    }
 cout<<"The Sum squares of first "<<n<<" natural numbers is"<<sum;
 return 0;
 
}