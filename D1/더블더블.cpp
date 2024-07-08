#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	cin >> n;
	int tmp = 1;
	cout << "1" << " ";

	for (int i = 1; i <= n; i++) {
        tmp *= 2;
        cout << tmp << " ";
	}

	return 0;
}

