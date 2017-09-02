#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
#include<queue>
#pragma warning(disable:4996)
using namespace std;

long long returnp(int k,long long p,vector<int>&a) {
	long long sum(0);
	int z = a.size();
	//vector<int>b(k);
	//for (int i(0); i < k; i++)b[i] = a[i];

	priority_queue<int> qi;
	for (int i(0); i < k; i++)qi.push(a[i]);

	int q(1);

	for (int l(k); l < z; l++) {
		sum += qi.top()*q;
		qi.pop();
		qi.push(a[l]);
		q++;
	}
	
	while (!qi.empty()) {
		sum += qi.top()*q;
		qi.pop();
		q++;
	}
	/*
	sort(b.begin(), b.end());

	int q(1);
	for (int l(k); l < z; l++) {
		if (sum > p)return p + 1;
		if (b[k - 1] > a[l]) {
			sum += b[k - 1] * q;
			q++;
			//b[k - 1] = a[l];
			int max = k-1;
			int min = 0;
			int mm = (k-1) / 2;
			while (1){
				if (b[mm] > a[l]) {
					max = mm;
					mm = (mm + min) / 2;
				}
				else {
					min = mm;
					mm = (mm + max) / 2+1;
				}
				if (max == mm) {
					for (int i(k - 1); i > mm; i--) {
						b[i] = b[i - 1];
					}
					b[mm] = a[l];
					break;
				}

			}
			//sort(b.begin(), b.end());
		}
		else {
			sum += b[k - 1] * q;
			q++;
			b[k - 1] = a[l];
		}
	}
	
	for (int i(b.size() - 1); i >= 0; i--) {
		sum += b[i] * q;
		q++;
	}*/
	
	return sum;
}

int main() {
	int N;
	long long P;
	while (cin>>N>>P) {
		vector<int>a(N);
		for (int i(0); i < N; i++)scanf("%d", &a[i]);
			//cin >> a[i];

		vector<int>b(a);

		sort(b.begin(),b.end());

		long long sum(0);

		for (int i(N - 1); i >= 0; i--)sum += b[i] * (N-i);

		if (sum > P) {
			cout << -1 << endl;
			continue;
		}
		
		int k(N / 2);
		int max(N);
		int min(0);

		while (1) {
			long long p1 = returnp(k, P, a);

			if (k == max) {
				long long p2 = returnp(k + 1, P, a);
				long long p3(P+1);
				if (k != 1)p3 = returnp(k - 1, P, a);
				if (p3 > P && p1 <= P) {
					printf("%d", k);
					//cout << k << endl;
					break;
				}
				else if (p1 > P&&p2 <= P) {
					printf("%d", k+1);
					//cout << k + 1 << endl;
					break;
				}
			}
			if (p1 <= P) {
				max = k;
				if(k != 1)k = (min + k) / 2;
			}
			else {
				min = k;
				k = (max + k) / 2 + 1;
			}
		}
	}
	return 0;
}