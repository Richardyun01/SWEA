#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	int len;
	cin >> n;

	int current, prev;
	int arr[10][10];

	for (int i = 1; i <= n; i++) {
        cin >> len;
        cout << "#" << i << "\n";
        for (int j = 0; j < len; j++) {
            prev = (j + 1) % 2;
            current = j % 2;

            for (int k = 0; k <= j; k++) {
                if (k == 0 || k == j) arr[current][k] = 1;
                else arr[current][k] = arr[prev][k-1] + arr[prev][k];
            }

            for (int k = 0; k <= j; k++) {
                cout << arr[current][k] << " ";
            }

            cout << "\n";
        }
	}

	return 0;
}
