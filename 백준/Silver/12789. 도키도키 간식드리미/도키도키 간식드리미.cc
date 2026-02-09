#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>

using namespace std;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    
    int N;
    stack<int> s;
    int target = 1;

    cin >> N;

    while (N--)
    {
        int student;
        cin >> student;

        if (student == target)
        {
            target++;
        }
        else if (student > target)
        {
            s.push(student);
        }
        while (!s.empty() && s.top() == target)
        {
            s.pop();
            target++;
        }

        if (s.empty() && N == 0)
        {
            cout << "Nice";
        }
        else if (N == 0)
        {
			cout << "Sad";
        }
    }



	return 0;
}