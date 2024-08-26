/* The art of reality */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define debug cout << "!!!" ;
#define max_heap(h) priority_queue<h>
#define min_heap(h) priority_queue<h, vector<h>, greater<h>>
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
//cout << fixed << setprecision(4) << num << endl;

const int INF = 1e9 + 7;
const int N = 1e6 + 10;

int l[N], r[N], n;
pii a[N], b[N];

void merge1(int start, int end)
{
	if(end <= start)
	{
		return;
	}
	int mid = (start + end) / 2;
	merge1(start, mid);
	merge1(mid + 1, end);
	int pl = start, pr = mid + 1, pans = start;
	while(pl <= mid && pr <= end)
	{
		if(a[pl] > a[pr])
		{
			l[a[pr].ss] += (mid - pl + 1);
			b[pans].ff = a[pr].ff;
			b[pans++].ss = a[pr++].ss;
		}
		else
		{
			r[a[pl].ss] += (pr - mid - 1);
			b[pans].ff = a[pl].ff;
			b[pans++].ss = a[pl++].ss;
		}
	}
	while(pl <= mid)
	{
		r[a[pl].ss] += (pr - mid - 1);
		b[pans].ff = a[pl].ff;
		b[pans++].ss = a[pl++].ss;
	}
	while(pr <= end)
	{
		l[a[pr].ss] += (mid - pl + 1);
		b[pans].ff = a[pr].ff;
		b[pans++].ss = a[pr++].ss;
	}
	for(int i = start ; i <= end ; i++)
	{
		a[i].ff = b[i].ff;
		a[i].ss = b[i].ss;
	}
	return;
}

int main(){
	flash;
	ll answer = 0;
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i].ff;
		a[i].ss = i;
	}
	merge1(1, n);
	for(int i = 1 ; i <= n ; i++)
	{
		answer += (ll)l[i] * r[i];
	}
	cout << answer;
	

	return 0;
}
