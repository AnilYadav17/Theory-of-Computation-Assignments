#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int state = 0; // q0=0, q1=1, q2=2, q3=3

    cout << "Enter binary string: ";
    cin >> input;

    for(char ch : input)
    {
        switch(state)
        {
            case 0: // q0
                if(ch == '1')
                    state = 1;
                else if(ch == '0')
                    state = 0;
                else
                {
                    cout << "Invalid input";
                    return 0;
                }
                break;

            case 1: // q1 (seen 1)
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

            case 2: // q2 (seen 10)
                if(ch == '1')
                    state = 3;
                else if(ch == '0')
                    state = 0;
                else
                {
                    cout << "Invalid input";
                    return 0;
                }
                break;

            case 3: // q3 (ends with 101)
                if(ch == '1')
                    state = 1;
                else if(ch == '0')
                    state = 2;
                else
                {
                    cout << "Invalid input";
                    return 0;
                }
                break;
        }
    }

    if(state == 3)
        cout << "String Accepted (ends with 101)\n";
    else
        cout << "String Rejected\n";

    return 0;
}