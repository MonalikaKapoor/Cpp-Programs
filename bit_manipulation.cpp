// bit manipulation: set bit, clear bit, toggle bit, update bit
#include <bits/stdc++.h>
using namespace std;

int setbit(int n, int k) 
{ // Setting a bit means that if kth bit is 0, then set it to 1 and if it is 1 then let it be as it is
    return (n | (1 << (k - 1))); 
} 

int clearbit(int n, int k) 
{ // Clearing a bit means that if kth bit is 1, then clear it to 0 and if it is 0 then let it be as it is
    return (n & (~(1 << (k - 1)))); 
}

int togglebit(long long int n, long long int k) 
{ // Toggling a bit means that if kth bit is 1, then change it to 0 and if it is 0 then change it to 1
    return (n ^ (1 << (k - 1)));
} 

int updatebit(long long int n, long long int k, long long int value) 
{ 
    long long int temp=~(1<<k);
    n=n&temp;
    return (n | (value << k)); 
} 

int main() 
{
    int n = 6, k = 2, value = 1;
    cout<<k<<" bit of "<<n<<" set = "<<setbit(n, k)<<endl;
    cout<<k<<" bit of "<<n<<" cleared = "<<clearbit(n, k)<<endl;
    cout<<k<<" bit of "<<n<<" toggled = "<<togglebit(n, k)<<endl;
    cout<<k<<" bit of "<<n<<" updated = "<<updatebit(n, k, value)<<endl;
    return 0;
}
