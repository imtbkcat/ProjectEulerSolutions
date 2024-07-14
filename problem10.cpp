/*
# Project Eular Problem 10
# https://projecteuler.net/problem=10
*/
#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using u64 = unsigned long long;
using i64 = long long;
using pii = pair<int, int>;

u64 modmul(u64 a, u64 b, u64 M) {
	i64 ret = a * b - M * u64(1.L / M * a * b);
	return ret + M * (ret < 0) - M * (ret >= (i64)M);
}

u64 modpow(u64 b, u64 e, u64 mod) {
	u64 ans = 1;
	for (; e; b = modmul(b, b, mod), e /= 2)
		if (e & 1) ans = modmul(ans, b, mod);
	return ans;
}

bool isPrime(u64 n) {
	if (n < 2 || n % 6 % 4 != 1) return (n | 1) == 3;
	u64 A[] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022},
	    s = __builtin_ctzll(n-1), d = n >> s;
	for (u64 a : A) {   // ^ count trailing zeroes
		u64 p = modpow(a%n, d, n), i = s;
		while (p != 1 && p != n - 1 && a % n && i--)
			p = modmul(p, p, n);
		if (p != n-1 && i != s) return 0;
	}
	return 1;
}

int main()
{
	//cin.tie(0)->sync_with_stdio(0);
	//cin.exceptions(cin.failbit);
	u64 sum = 0;
	for (u64 i = 2; i < 2000000; i++)
	{
		if (isPrime(i)) sum += i;
	}
	cout << sum << endl;
}

