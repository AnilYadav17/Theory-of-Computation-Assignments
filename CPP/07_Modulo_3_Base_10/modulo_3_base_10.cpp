#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int state = 0; // q0=0, q1=1, q2=2

    cout << "Enter decimal number: ";
    cin >> input;

    for(char ch : input)
    {
        if(ch < '0' || ch > '9')
        {
            cout << "Invalid input";
            return 0;
        }

        int d = ch - '0';

        switch(state)
        {
            case 0: // remainder 0
                state = d % 3;
                break;

            case 1: // remainder 1
                state = (1 + d) % 3;
                break;

            case 2: // remainder 2
                state = (2 + d) % 3;
                break;
        }
    }

    if(state == 0)
        cout << "Accepted (number mod 3 = 0)";
    else
        cout << "Rejected";

    return 0;
}