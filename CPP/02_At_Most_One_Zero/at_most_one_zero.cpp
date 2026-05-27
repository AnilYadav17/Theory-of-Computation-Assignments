#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int state = 0; // q0=0, q1=1, q2=2 (dead state)

    cout << "Enter binary string: ";
    cin >> input;

    for(char ch : input)
    {
        switch(state)
        {
            case 0: // q0 : no 0 seen
                if(ch == '0')
                    state = 1;
                else if(ch == '1')
                    state = 0;
                else
                {
                    cout << "Invalid input";
                    return 0;
                }
                break;

            case 1: // q1 : one 0 seen
                if(ch == '0')
                    state = 2;
                else if(ch == '1')
                    state = 1;
                else
                {
                    cout << "Invalid input";
                    return 0;
                }
                break;

            case 2: // q2 : more than one 0
                if(ch == '0' || ch == '1')
                    state = 2;
                else
                {
                    cout << "Invalid input";
                    return 0;
                }
                break;
        }
    }

    if(state == 0 || state == 1)
        cout << "String Accepted (at most one 0)\n";
    else
        cout << "String Rejected (more than one 0)\n";

    return 0;
}