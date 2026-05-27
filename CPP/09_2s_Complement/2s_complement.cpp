#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Enter binary string: ";
    cin >> input;

    // Check valid input
    for(char ch : input)
    {
        if(ch != '0' && ch != '1')
        {
            cout << "Invalid input";
            return 0;
        }
    }

    // Step 1: Find 1's complement
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == '0')
            input[i] = '1';
        else
            input[i] = '0';
    }

    // Step 2: Add 1
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

    // If carry is still 1, prepend it
    if(carry == 1)
        input = '1' + input;

    cout << "2's Complement: " << input;

    return 0;
}