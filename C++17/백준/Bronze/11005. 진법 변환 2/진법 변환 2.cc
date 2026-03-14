
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


    int n, b;
    cin >> n >> b;

    string result = "";

    while (n > 0)
    {
        int a = n % b;

        if (a < 10)
        {
			result += (char)(a + '0');
        }
        else
        {
            result += (char)(a - 10 + 'A');
        }
        n = n / b;


    }
        reverse(result.begin(), result.end());

        cout << result << "\n";


    return 0;
    
}

