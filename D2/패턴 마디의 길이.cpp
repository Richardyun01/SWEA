#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
        string str, tmp;
        cin >> str;
        int cnt = 1;
        tmp += str[0];

        for (int j = 1; j < str.size(); j++) {
            if (tmp != str.substr(tmp.size(), j)) {
                tmp += str[j];
                cnt++;
            } else {
                break;
            }
        }

        cout << "#" << i+1 << " " << cnt << "\n";
	}

	return 0;
}
