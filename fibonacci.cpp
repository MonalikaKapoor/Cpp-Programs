#include <iostream>  
using namespace std; 

int main(){  
  int num1=0,num2=1,num3,i,n;    
  cout<<"\nEnter the number of elements of Fibonacci Series : ";    
  cin>>n;    
  cout<<num1<<' '<<num2<<' '; //First print 0 and 1 

  for(i=2;i<n;++i){    
    num3=num1+num2;    
    cout<<num3<<' ';    
    num1=num2;    
    num2=num3;    
  }    
  return 0;  
}  