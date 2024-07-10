#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        int sum = 0;
        for (int j = 1; j <= num; j++) {
            if (j % 2 == 1) sum += j;
            else sum -= j;
        }

        cout << "#" << i << " " << sum << "\n";
    }

	return 0;
}
