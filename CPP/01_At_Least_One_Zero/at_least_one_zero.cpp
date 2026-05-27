#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int state = 0; // q0 = 0 (no 0 seen), q1 = 1 (at least one 0 seen)

    cout << "Enter binary string: ";
    cin >> input;

    for(char ch : input)
    {
        switch(state)
        {
            case 0: // q0
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

            case 1: // q1
                if(ch == '0' || ch == '1')
                    state = 1;
                else
                {
                    cout << "Invalid input";
                    return 0;
                }
                break;
        }
    }

    if(state == 1)
        cout << "String Accepted (contains at least one 0)";
    else
        cout << "String Rejected (no 0 present)\n";

    return 0;
}