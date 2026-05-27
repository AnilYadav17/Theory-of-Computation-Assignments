#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int state = 0; // q0=0, q1=1, q2=2

    cout << "Enter binary string: ";
    cin >> input;

    for(char ch : input)
    {
        switch(state)
        {
            case 0: // remainder 0
                if(ch == '0') state = 0;
                else if(ch == '1') state = 1;
                else { cout << "Invalid input"; return 0; }
                break;

            case 1: // remainder 1
                if(ch == '0') state = 2;
                else if(ch == '1') state = 0;
                else { cout << "Invalid input"; return 0; }
                break;

            case 2: // remainder 2
                if(ch == '0') state = 1;
                else if(ch == '1') state = 2;
                else { cout << "Invalid input"; return 0; }
                break;
        }
    }

    if(state == 0)
        cout << "Accepted (binary number mod 3 = 0)"<<endl;
    else
        cout << "Rejected";

    return 0;
}