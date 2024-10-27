#include<iostream> 
using namespace std; 
int main() 
{ 
int n; 
int sum=0; 
int i; 
cout<<"enter a positive integer"<<endl; 
cin>>n; 
for(i=1;i<=n;i++) 
{ 
sum+=i*i; 
} 
cout<<"the squares of the first "<<n<<" natural number is "<<sum<<endl;
return 0;
}