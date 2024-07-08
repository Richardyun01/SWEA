#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin >> T;

    int arr[T];
	for (int i = 0; i < T; i++) {
        cin >> arr[i];
	}
	sort(arr, arr+T);
    int mid = arr[T/2];
    cout << mid << endl;

	return 0;
}
