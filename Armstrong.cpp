#include<iostream>
using namespace std;
int main()
{
  int n,i,cube,check=0;
  cout<<"Enter a number \n";
  cin>>n;
  for(i=n;i>0;i=i/10)
  {
    int last_dig=i%10;
    cube=last_dig*last_dig*last_dig;
    check=check+cube;
  }
  if(check==n)
  cout<<"Armstrong Number \n";
  else
  cout<<"Not an armstrong number \n";
}
