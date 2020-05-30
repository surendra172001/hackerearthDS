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
#define pl_(x)	printf("%lld ",x)
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

const ll MAX = (1e4)+5;
const ll MOD = (1e9)+7;

ll a[MAX], s[MAX];

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    si(t);

    while(t--) {

      memset(a, 0, sizeof(a));
      memset(s, 0, sizeof(s));
      ll i, n;

      sl(n);
      fo(i, n) sl(a[i]), a[i] %= MOD;

      s[0] = a[0];
      for(i = 1; i < n; i++) 
        s[i] = (s[i-1] + a[i])%MOD;

      int qn;
      si(qn);
      vpl q(qn);
      ll l, r;
      fo(i, qn) 
        sl(l), q[i].F = l-1;
      fo(i, qn) 
        sl(r), q[i].S = r-1;

      // fo(i, n) pl_(s[i]);

      fo(i, qn) {
        l = q[i].F, r = q[i].S;

        ll f1 = l/n%MOD, f2 = r/n%MOD;

        ll ans = (f2*s[n-1]%MOD - f1*s[n-1]%MOD + MOD)%MOD;
        ans = (ans + (s[r%n] - s[l%n-1] + MOD)%MOD)%MOD;

        pl_(ans);
      }
      nl;
    }

    return 0;
}
