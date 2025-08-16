#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    
    if (n <= 2) {
        printf("method = %d", n);
        return 0;
    }
    
    int dp[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    
    for (int i = 3; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];
    
    printf("method = %d", dp[n]);

    return 0;
}
