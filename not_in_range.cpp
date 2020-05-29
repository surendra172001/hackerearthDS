

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
#define pl_(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define nl	    printf("\n")
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

const int MAX = (1e6)+1;

int a[MAX];

bool cmp(pii &a, pii &b) {
	if(a.S != b.S)
		return a.S < b.S;
	else 
		return a.F < b.F;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int i, n;

    fo(i, MAX) a[i] = i;

    si(n);

    if(n == 0) {
      pl(500000500000);
      return 0;
    }

    vpii q(n);

    int l, r;
    fo(i, n) {
      si(l);si(r);
      q[i] = {l, r};
    }

    sort(q.begin(), q.end(), cmp);

    for(i = q[0].F; i <= q[0].S; i++) a[i] = 0;

    int pl = q[0].F, pr = q[0].S;
    for(i = 1; i < n; i++) {
      l = q[i].F, r = q[i].S;
      while(pl > l) a[l] = 0, l += 1;
      if(l > pr) while(l <= r) a[l] = 0, l++;
      else while(pr < r) a[++pr] = 0;
      pl = q[i].F, pr = q[i].S;
    }

    ll ans = 0;

    fo(i, MAX) ans += a[i];

    pl(ans);

    return 0;
}
