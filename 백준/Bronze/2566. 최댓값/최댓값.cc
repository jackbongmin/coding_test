#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int A[9][9];


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    for(int i = 0; i < 9; ++i) 
    {
        for(int j = 0; j < 9; ++j) 
        {
            cin >> A[i][j];
        }
	}

    int a = -1; 
    int x, y = -1;

    for (int i = 0; i < 9; ++i)
    {
        for(int j = 0; j < 9; ++j)
        {
            if (A[i][j] > a)
            {
                a = A[i][j];
				x = i + 1;
				y = j + 1;
            }
		}
    }
	cout << a << "\n" << x << " " << y;
}