#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
        str[i] = toupper(str[i]);
	}

    cout << str;

	return 0;
}
