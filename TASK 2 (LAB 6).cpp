#include<iostream> 
using namespace std; 
int main() 
{ 
string password="secure password",input; 
int attempt=1; 
do 
{ 
cout<<"enter a password"<<endl; 
cin>>input; 
if(input==password) 
{ 
cout<<"correct password"<<endl; 
break; 
} 
else 
{ 
cout<<"incorrect password"<<endl; 
} 
attempt++; 
} 
while(attempt<=3); 
{ 
cout<<"maximum attempt"<<endl; 
} 
return 0; 
} 