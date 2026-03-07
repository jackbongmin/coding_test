
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
string name_arr[100005];

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    string N;
    int B;
    cin >> N >> B;

    int num = 0;

    for (int i = 0; i < N.length(); ++i)
    {
        char ch = N[i];
        int value = 0;

        if (ch >= '0' && ch <= '9')
        {
            value = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            value = ch - 'A' + 10;
        }

        num = (num * B) + value;
    }

	cout << num << "\n";
   

    return 0;
    
}

