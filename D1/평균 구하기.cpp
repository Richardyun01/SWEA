#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
        cout << "#" << i << " ";
        float sum = 0;
        for (int k = 0; k < 10; k++) {
            int n;
            cin >> n;
            sum += n;
        }
        sum /= 10;
        cout << round(sum) << endl;
	}
	return 0;
}
