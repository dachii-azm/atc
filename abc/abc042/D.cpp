#include <bits/stdc++.h>
using namespace std;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    int h, w, a, b;
    cin>>h>>w>>a>>b;
    COMinit();
    long long int all = COM(h+w-2, h-1);

    for (int i=0; i<a; i++){
      all=all%MOD-(COM(h+b-i-2, h-i-1)%MOD*COM(w-b-1+i, w-b-1))%MOD;
      if (all < 0) all += MOD;
    }

    cout<<all%MOD<<endl;    
}

