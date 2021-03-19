/*
  The following code checks if the given number is a palindrome or not.
*/


#include <iostream>

using namespace std;

int main()
{

    // o --> original number
    // r --> reversed number

    int n, r= 0, remainder, o;
    cout<<"Enter an number: ";
    cin>>n;
    o = n;

    while (n != 0)
    {
        remainder = n % 10;
        r = r * 10 + remainder;
        n /= 10;
    }


    if (o == r)
        cout<<o<<" is a Palindrome.";
    else
        cout<<o<<" is not a Palindrome.";

    return 0;
}
