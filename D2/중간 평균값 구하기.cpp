#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int min = 10000;
        int max = 0;
        float sum = 0;
        for (int j = 0; j < 10; j++) {
            int num;
            cin >> num;
            if (min > num) min = num;
            if (max < num) max = num;
            sum += num;
        }

        sum -= min+max;
        sum /= 8;
        int ans = round(sum);

        cout << "#" << i << " " << ans << "\n";
    }

	return 0;
}
