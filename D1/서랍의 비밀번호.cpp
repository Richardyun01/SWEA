#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int ans;
	cin >> ans;
	int start;
	cin >> start;
	int cnt = 1;

	for (int i = start; i < ans; i++) {
        cnt++;
	}

	cout << cnt;

	return 0;
}

