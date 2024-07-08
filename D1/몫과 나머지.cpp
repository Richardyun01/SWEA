#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
        int b;
        cin >> b;
        int d;
        cin >> d;

        int out = b / d;
        int rest = b % d;

        cout << "#" << i+1 << " " << out << " " << rest;
        cout << "\n"
	}

	return 0;
}
