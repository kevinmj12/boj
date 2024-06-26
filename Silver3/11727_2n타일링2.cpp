#include <iostream>
using namespace std;
#define MOD 10007

int main(){
    int n;
    cin >> n;

    int dp[1001];

    dp[1] = 1;
    dp[2] = 3;
    
    for (int i = 3; i <= n; i++){
        dp[i] = (dp[i-1]+2*dp[i-2])%MOD;
    }

    cout << dp[n];
}