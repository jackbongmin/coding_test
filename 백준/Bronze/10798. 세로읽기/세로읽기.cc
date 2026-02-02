#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string A[5];


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    for(int i=0; i<5; i++) 
    {
        cin >> A[i];
	}
    for (int j = 0; j < 15; ++j)
    {
        for (int i = 0; i < 5; ++i)
        {
            if (j < A[i].length())
            {
				cout << A[i][j];
            }
		}
    }
}