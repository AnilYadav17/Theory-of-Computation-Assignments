#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int count0 = 0, count1 = 0;

    cout << "Enter binary string: ";
    cin >> input;

    for(char ch : input)
    {
        if(ch == '0')
            count0++;
        else if(ch == '1')
            count1++;
        else
        {
            cout << "Invalid input";
            return 0;
        }
    }

    cout << "Number of 0's: " << count0 << endl;
    cout << "Number of 1's: " << count1 << endl;

    return 0;
}