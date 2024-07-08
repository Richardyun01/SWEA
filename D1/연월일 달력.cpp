#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin >> T;
	int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 1; i <= T; i++) {
        cout << "#" << i << " ";

        string str = "";
        cin >> str;
        string y = "";
        string m = "";
        string d = "";

        for (int i = 0; i < 4; i++) {
            y += str[i];
        }

        for (int i = 4; i < 6; i++) {
            m += str[i];
        }

        for (int i = 6; i < 8; i++) {
            d += str[i];
        }

        if (0 < stoi(d) && stoi(d) <= day[stoi(m)]) {
            cout << y << "/" << m << "/" << d << endl;
        } else {
            cout << "-1" << endl;
        }
	}
	return 0;
}
