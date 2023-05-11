#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define long long ll;
int main() {
	ll n;
	cin >> n;
	cout << (n ^ 1 && n/2 ^ 1) ? true : false;
	return 0;
}
