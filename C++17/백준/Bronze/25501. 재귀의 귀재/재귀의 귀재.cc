
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int counting = 0;

int recursion(const char* s, int l, int r) {
    counting++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int T;
    cin >> T;

    while (T--)
    {
        char s[1001];
        cin >> s;

        counting = 0;

        cout << isPalindrome(s) << " " << counting << "\n";
    }
 
    return 0;
}

