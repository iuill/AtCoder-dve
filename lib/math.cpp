#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using P = pair<int,int>;

/* 
name: modPow
proc: 高速なべき乗
*/
ll modPow(ll a, ll n, ll mod){
    ll res = 1;
    while(n>0){
        if(n&1) res = res * a % mod;
        a = a * a % mod;
        n = n>>1;
    }
    return res;
}

/* 
name: gcd
proc: ユークリッドの互除法
*/
int gcd(int x, int y){
    if(x<y) swap(x, y);
    while(y>0){
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

/* 
name: vlcm
proc: 可変引数で最小公倍数を求める関数
*/
template <class T>
T vlcm(T m, T n) {
  return std::lcm(m, n);
}

/*
name: extGCD
proc: 拡張ユークリッドの互除法
*/
ll extGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = extGCD(b, a%b, y, x);
    y -= a/b * x;
    return d;
}

/*
name: EulerPhi
proc: オイラーのφ関数
*/
int EulerPhi(int n) {
  if (n == 0) return 0;
  int ans = n;
  for (int x = 2; x*x <= n; ++x) {
    if (n % x == 0) {
      ans -= ans / x;
      while (n % x == 0) n /= x;
    }
  }
  if (n > 1) ans -= ans / n;
  return ans;
}

// nCr を定義通りに求める関数
long long nCr(long long n, long long r) {
	long long nPr = 1;
	for(long long i = 0; i < r; ++i) {
		nPr *= (n - i);
	}

	long long fact_r = 1;
	for(long long i = 1; i <= r; ++i) {
		fact_r *= i;
	}

	long long ret = nPr / fact_r;
	return ret;
}