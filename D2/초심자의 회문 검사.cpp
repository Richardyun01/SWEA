#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;

        bool check = true;
        for (int i = 0; i < str.size()/2; i++) {
            if (str[i] != str[str.size()-i-1]) {
                check = false;
            }
        }

        if (check == true) cout << "#" << i << " " << "1" << "\n";
        else cout << "#" << i << " " << "0" << "\n";
	}

	return 0;
}
