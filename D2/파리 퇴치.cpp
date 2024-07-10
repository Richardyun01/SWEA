#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	cin >> n;

    for (int i = 1; i <= n; i++) {
        int wall;
        cin >> wall;
        int tap;
        cin >> tap;

        int arr[wall][wall];
        for (int j = 0; j < wall; j++) {
            for (int k = 0; k < wall; k++) {
                cin >> arr[j][k];
            }
        }

        int ans = 0;
        for (int j = 0; j < wall-tap+1; j++) {
            for (int k = 0; k < wall-tap+1; k++) {
                int temp = 0;
                for (int a = j; a < j+tap; a++) {
                    for (int b = k; b < k+tap; b++) {
                        temp += arr[a][b];
                    }
                }

                if (ans < temp) ans = temp;
            }
        }

        cout << "#" << i << " " << ans << "\n";
    }


	return 0;
}

