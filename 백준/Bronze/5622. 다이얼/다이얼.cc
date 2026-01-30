#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string number;
string numbertime;
//int arr[12];
int finaltime;

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    //for (int i = 0; i < 12; ++i)
    //{
    //    arr[i] = i;
    //}
    //
    cin >> number;
    number.resize(number.length());
    numbertime.resize(number.length());

    for (int i = 0; i < number.length(); ++i)
    {
        if (number[i] == 'A' || number[i] == 'B' || number[i] == 'C')
        {
            number[i] = '2';
        }
        else if (number[i] == 'D' || number[i] == 'E' || number[i] == 'F')
        {
            number[i] = '3';
        }
        else if (number[i] == 'G' || number[i] == 'H' || number[i] == 'I')
        {
            number[i] = '4';
        }
        else if (number[i] == 'J' || number[i] == 'K' || number[i] == 'L')
        {
            number[i] = '5';
        }
        else if (number[i] == 'M' || number[i] == 'N' || number[i] == 'O')
        {
            number[i] = '6';
        }
        else if (number[i] == 'P' || number[i] == 'Q' || number[i] == 'R' || number[i] == 'S')
        {
            number[i] = '7';
        }
        else if (number[i] == 'T' || number[i] == 'U' || number[i] == 'V')
        {
            number[i] = '8';
        }
        else if (number[i] == 'W' || number[i] == 'X' || number[i] == 'Y' || number[i] == 'Z')
        {
            number[i] = '9';
        }
        else
        {
            number[i] = '0';
        }

        numbertime[i] = number[i] + 1;
    }

    for (int i = 0; i < number.length(); ++i)
    {
        finaltime += (numbertime[i] - '0');
    }

    cout << finaltime;


    return 0;
}