#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T;
    cin >> T;
    string grade[10] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};

    for (int i = 1; i <= T; i++) {
        vector<float> sum;
        int N, k;
        cin >> N >> k;
        for (int j = 0; j < N; j++) {
            int mid, last, report;
            cin >> mid >> last >> report;
            sum.push_back(mid*0.35 + last*0.45 + report*0.2);
        }

        int cnt = 0;
        for (int j = 0; j < N; j++) {
            if (sum[j] > sum[k-1]) cnt++;
        }

        cout << "#" << i << " " << grade[cnt/(N/10)] << "\n";
    }

	return 0;
}
