/*#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class T {
public:
	int time;
	int m_x;
	int m_y;
	bool p;
	T() :p(0){}
};

int maxsize(vector<T>&a,int&k,vector<int>&allmaxsize) {
	int max(1);
	a[k].p = 1;
	for (int i(k-1); i >= 0; i--) {
		if (a[k].time == a[i].time)continue;
		if (((a[i].time - a[k].time) >= (abs(a[i].m_x - a[k].m_x) + abs(a[i].m_y - a[k].m_y)))|| ((a[i].m_x == a[k].m_x) && (a[i].m_y == a[k].m_y))) {
			if (allmaxsize[i]==0) {
				int q = 1 + maxsize(a, i, allmaxsize);
				if (q > max) max = q;
			}
			else {
				int q = 1 + allmaxsize[i];
				if (q > max) max = q;
			}
		}
	}
	allmaxsize[k] = max;
	return max;
}

int main() {
	int n, m;
	while (cin >> n >> m) {
		vector<int>allmaxsize(10000, 0);
		vector<T> a(m);
		for (int i(0); i < m; i++)
			cin >> a[i].time >> a[i].m_x >> a[i].m_y;

		int max(0);

		for (int i(m - 1); i >= 0; i--) {
			if (!a[i].p) {
				int k = maxsize(a, i, allmaxsize);
				if (k > max)max = k;
			}
		}
		cout << max << endl;
	}
}
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

struct sd { int x, y, t; };

int main()

{
	int n, m;
	while (scanf("%d%d", &n, &m)) {
		sd s[10005];

		int dp[10005], ans(0);

		for (int i = 1; i <= m; i++) scanf("%d%d%d", &s[i].t, &s[i].x, &s[i].y), dp[i] = 1;

		for (int i = 1; i <= m; i++)

			for (int j = i + 1; j <= m; j++)

 				if (abs(s[i].x - s[j].x) + abs(s[i].y - s[j].y) <= s[j].t - s[i].t)

					dp[j] = max(dp[j], dp[i] + 1);

		for (int i = 1; i <= m; i++) ans = max(ans, dp[i]);

		printf("%d\n", ans);

		
	}
	return 0;
}
