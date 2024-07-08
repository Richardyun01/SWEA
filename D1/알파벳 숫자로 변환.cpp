#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
        char c;
        c = str[i];
        cout << c - 40;
        cout << " ";
	}

	return 0;
}
