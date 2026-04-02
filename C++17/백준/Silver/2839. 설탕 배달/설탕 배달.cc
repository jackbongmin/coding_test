
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


    int n;
    cin >> n;
    
    int a = 0;

    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            a += n / 5;
			cout << a << "\n";
            return 0;
        }

		n -= 3;
        a++;
    }
	cout << -1 << "\n";


    return 0;
    
}



