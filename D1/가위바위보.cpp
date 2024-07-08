#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int a;
	cin >> a;
	int b;
	cin >> b;

	if (a == 1 && b == 2 ||
        a == 2 && b == 3 ||
        a == 3 && b == 1) cout << "B";
    else if (a == 2 && b == 1 ||
        a == 3 && b == 2 ||
        a == 1 && b == 3) cout << "A";

	return 0;
}
