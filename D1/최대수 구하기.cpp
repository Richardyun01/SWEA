#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
        cout << "#" << i << " ";
        float max = 0;
        for (int k = 0; k < 10; k++) {
            int n;
            cin >> n;
            if (n >= max) max = n;
        }
        cout << max << endl;
	}
	return 0;
}
