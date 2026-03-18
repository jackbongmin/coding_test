
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


    int a, b, c;
    cin >> a >> b >> c;

    if (a + b + c == 180) 
    {
        if (a == 60 && b == 60 && c == 60) {
            cout << "Equilateral\n";
        }
        else if (a == b || b == c || a == c) {
            cout << "Isosceles\n";
        }
        else {
            cout << "Scalene\n";
        }

    }
    else {
        cout << "Error\n";
    }


    return 0;
    
}

