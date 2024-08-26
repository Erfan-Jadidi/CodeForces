#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int a[N], freq[N], dp[N][2];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        // dp[i][0] represents the maximum score the current player can get
        // dp[i][1] represents the maximum score the other player can get

        for (int i = 1; i <= n; i++) {
            dp[i][1] = max(dp[i-1][0], dp[i-1][1]);
            dp[i][0] = dp[i-1][1] + freq[a[i]] * a[i];
            freq[a[i]] = 0; // clear the frequency of the current number
        }

        cout << max(dp[n][0], dp[n][1]) << endl;
    }

    return 0;
}
