#include <set>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include<iomanip>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int maxn = 3e5 + 10;
const int mod = 1e9 + 7;
const int inf = 0x3f3f3f3f;
const double PI = 3.14159;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
int t[maxn];
void SequenceSearch(int key, int n) {
	for (int i = 1; i <= n; i++)
		if (t[i] == key)
		{
			cout << "利用顺序查找成功，下标为" << i << endl;
			return;
		}
	cout << "查找失败";
	return;
}
void BinarySearch(int key, int n) {
	int left = 1;
	int right = n;
	while (left <= right) {
		int m = (left + right) / 2;
		if (key == t[m]) {
			cout << "二分查找成功下标为：" << m << endl;
			return;
		}
		else if (key < t[m])
			right = m - 1;
		else
			left = m + 1;
	}
	cout << "查找失败";
	return;
}
int main()
{
	int n;
	int key;
	cin >> n;
	cin >> key;
	for (int i = 1; i <= n; i++)cin >> t[i];
	sort(t + 1, t + 1 + n);
	SequenceSearch(key, n);
	BinarySearch(key, n);
	
	return 0;
}