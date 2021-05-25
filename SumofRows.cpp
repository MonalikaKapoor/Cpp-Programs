#include <iostream>
using namespace std;

int main()
{
    int i,j, m, n;
    cout<<"\nEnter number of rows and coloumns : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"\nEnter elements of matrix : \n";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin>>arr[i][j];

    cout << "\nFinding Sum of each row:";
    int sum=0;

    for (i = 0; i < m; ++i) {s
        for (j = 0; j < n; ++j) {
            sum = sum + arr[i][j];
        }
        cout<< "\nSum of the row "<< i << " = " << sum << endl;
        sum = 0;
    }
 
    return 0;
}