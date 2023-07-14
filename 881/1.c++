#include <bits/stdc++.h>
 
using namespace std;
 
int n, arr[59];
 
void solve()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
 
	sort(arr, arr + n);
	int res = 0;
	int l = 0, r = n - 1;
	while (l < r)
		res += arr[r--] - arr[l++];
 
	cout << res << '\n';
}
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
#endif
 
	int t;
	std::cin >> t;
	while (t--)
		solve();
	return 0;
}
 