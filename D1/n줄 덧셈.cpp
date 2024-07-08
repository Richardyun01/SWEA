#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	cin >> n;
	int ans = 0;

	for (int i = 1; i <= n; i++) {
        ans += i;
	}

	cout << ans;

	return 0;
}
