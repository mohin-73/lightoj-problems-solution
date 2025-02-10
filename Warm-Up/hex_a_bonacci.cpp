#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int mod = 10000007;
    
int fn(int n) {
    for (int i = 6; i <= n; i += 1) {
        arr[i] = 0;
        for (int j = 1; j <= 6; j += 1) {
            arr[i] = (arr[i] % mod + arr[i - j] % mod) % mod; 
        }
    }
    return arr[n] % mod;
}

int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &n);
        printf("Case %d: %d\n", caseno, fn(n));
    }
    return 0;
}
