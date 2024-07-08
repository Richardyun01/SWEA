#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int num;
	cin >> num;
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << sum << endl;

	return 0;
}
