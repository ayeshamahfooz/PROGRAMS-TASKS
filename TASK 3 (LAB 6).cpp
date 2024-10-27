#include<iostream> 
using namespace std; 
int main() 
{ 
int secretNum=100; 
int guess; 
do 
{ 
cout<<"enter the guess(1-100)"<<endl; 
cin>>guess; 
if(guess<secretNum) 
{ 
cout<<"too low!try again"<<endl; 
} 
else if(guess>secretNum) 
{ 
cout<<"too high!try again"<<endl; 
} 
} 
while(guess!=secretNum); 
cout<<"congratulations! you gussed the secret number"<<endl; 
return 0; 
} 