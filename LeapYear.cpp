#include <iostream>
using namespace std;

int main()
    {
        int year;

        cout<<"Program to Verify Leap Year...\n";

        cout << "Enter a Year: ";
        cin >> year;

        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    cout << "Year " << year << " is a Leap Year.";

                else
                    cout << "Year " << year << " is NOT a Leap Year.";
            }
            else
                cout << "Year " << year << " is a Leap Year.";
        }
        else
         cout << "Year " << year << " is not a Leap Lear.";

        return 0;

    }
