#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pi_(x)	printf("%d ",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define nl  	printf("\n")
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

const int MAX = (1e6)+5;
// const int SIZE = (1e4)+5;
int BIT[MAX];
int a[MAX];

int query(int r) {
	int ret = 0;
	for(; r > 0; r -= (r&-r)) ret += BIT[r];
	return ret;
}

void add(int v, int idx) {
	for(; idx < MAX; idx += (idx&-idx)) BIT[idx] += v;
}

int main()
{
    ios_base::sync_with_stdio(false);

	int n, i;

	si(n);
	fo(i, n) si(a[i]), ++a[i];

	vi ans;

	for(i = n-1; i >= 0; i--) {
		if(query(a[i]) == n-1-i) ans.pb(a[i]-1);
		add(1, a[i]);
	}

	for(int i = ans.size()-1; i >= 0; i--) pi_(ans[i]);
	nl;
    return 0;
}

