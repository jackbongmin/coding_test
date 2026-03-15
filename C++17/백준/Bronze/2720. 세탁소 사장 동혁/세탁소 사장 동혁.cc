
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>
#include <set>
#include <cctype>
#include <unordered_map>


using namespace std;


int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int T;
    cin >> T;

    while (T--) 
    {
        int C;
        cin >> C;

        int quarter = C / 25;
        C = C % 25;

        int dime = C / 10;
        C = C % 10;

        int nickel = C / 5;
        C = C % 5;

        int penny = C / 1;
        C = C % 1;

        cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
    }


    return 0;
    
}

