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
#define nl		printf("\n")
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

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    si(n);

    if(n == 2) {
      pi(60);
      return 0;
    } else if(n == 3) {
      pi(80);
      return 0;
    }

    ll a[n+1] = {0, 20, 30};

    for(int i = 3; i <= n; i++)
      a[i] = (i%2 == 1 ? 2*a[i-2] : 3*a[i-2]);

    // for(int i = 0; i <= n; i++) pl_(a[i]);
    // nl;

    ll maxM = max(a[n], a[n-1]);

    pl(2 * maxM);

    return 0;
}
