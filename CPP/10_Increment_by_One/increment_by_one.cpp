#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Enter binary string: ";
    cin >> input;

    // Validate input
    for(char ch : input)
    {
        if(ch != '0' && ch != '1')
        {
            cout << "Invalid input";
            return 0;
        }
    }

    // Add 1 to binary number
    int carry = 1;

    for(int i = input.length() - 1; i >= 0; i--)
    {
        if(input[i] == '1' && carry == 1)
        {
            input[i] = '0';
            carry = 1;
        }
        else if(input[i] == '0' && carry == 1)
        {
            input[i] = '1';
            carry = 0;
        }
    }

    // If carry still remains, prepend 1
    if(carry == 1)
        input = '1' + input;

    cout << "Incremented Binary: " << input<<endl;

    return 0;
}