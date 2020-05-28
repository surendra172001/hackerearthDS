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


const int MOD = (1e9) + 7;
const int MAX = (1e5) + 5;

ll a[MAX];

int leftMostSetBit(ll n) {
    int i = 62;
    for(; i >= 0 && !(n >> i & 1); i--) 
    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    si(t);
    while(t--) {
      int n, i;
      si(n);
          ll maxM = INT_MIN;
      fo(i, n) sl(a[i]), maxM = max(maxM, a[i]);

          int msb = leftMostSetBit(maxM);

          ll sum = 0;
          if(msb < n-1) {
              pl(sum);
              continue;
          }

      ll p2 = pow(2, n-1);

      fo(i, n) sum = (sum + (a[i] >= p2 ? a[i] : 0)) % MOD;

      pl(sum);
    }

    return 0;
}
