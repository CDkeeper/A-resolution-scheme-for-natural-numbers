#include <iostream>
using namespace std;
typedef long long ll;
const int N = 10010;
const int MOD = 2147483648;
unsigned int f[N];
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i <= n; i++)
			f[i] = 0;
		f[0] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				f[j] = f[j] + f[j - i];
			}
		}
		if (t != 0)
			cout << f[n] % MOD << endl;
		else
			cout << f[n] % MOD;
	}
	return 0;
}
