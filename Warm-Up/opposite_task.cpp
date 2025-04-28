#include <bits/stdc++.h>
using namespace std;

vector<int> problemsStored(int n) {
    vector<int> res;
    res.push_back(n / 2);
    res.push_back(n - res[0]);
    return res;
}

int main() {
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        int n;
        scanf("%d", &n);
        vector<int> ans = problemsStored(n);
        printf("%d %d\n", ans[0], ans[1]);
    }
    return 0;
}
