#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n = 10;
	cin >> n;

	for (int i = 1; i <= n; i++) {
	    int num = i;
        int tmp = 0;
        while (num > 0) {
            if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
                tmp++;
            num /= 10;
        }

        if (tmp == 0) cout << i << " ";
        else {
            for (int j = 0; j < tmp; j++) {
                cout << "-";
            }
            cout << " ";
        }
	}

	return 0;
}
