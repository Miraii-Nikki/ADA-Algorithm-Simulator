#include <iostream>
#include <iomanip>
using namespace std;

void knapsackMenu() {
    int n, W;
    cout << "\nEnter number of items: ";
    cin >> n;

    int wt[n], val[n];
    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    cout << "Enter values of items:\n";
    for (int i = 0; i < n; i++)
        cin >> val[i];

    cout << "Enter knapsack capacity: ";
    cin >> W;

    int dp[n + 1][W + 1];

    // DP table construction
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(
                    dp[i - 1][w],
                    val[i - 1] + dp[i - 1][w - wt[i - 1]]
                );
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    // Print DP table
    cout << "\n--- DP Table ---\n";
    cout << setw(5) << " ";
    for (int w = 0; w <= W; w++)
        cout << setw(5) << w;
    cout << endl;

    for (int i = 0; i <= n; i++) {
        if (i == 0)
            cout << setw(5) << "0";
        else
            cout << setw(5) << i;

        for (int w = 0; w <= W; w++) {
            cout << setw(5) << dp[i][w];
        }
        cout << endl;
    }

    cout << "\nMaximum value in knapsack = " << dp[n][W] << endl;
}
