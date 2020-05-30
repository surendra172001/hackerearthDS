

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

const int MAX = (1e6)+5;

int a[MAX], c[MAX], s[MAX];

int main()
{
    ios_base::sync_with_stdio(false);

    int i, n;

    si(n);
    fo(i, n) si(a[i]);

    s[0] = a[0];
    for(i = 1; i < n; i++) s[i] = s[i-1] + a[i];

    int sum = 0, dig = 0;

    sum = s[n-1] - s[0];
    dig = a[n-1];
    if(sum%3 == 0 && dig%2 == 0 && dig%5 == 0) {
      c[0] = 1;
    }

    for(int i = 1; i < n-1; i++) {
      c[i] = c[i-1];
      sum = s[i-1] + s[n-1] - s[i];
      dig = (a[i-1] + a[n-1])%10;
      // pi_(a[i]);
      // pi_(dig);
      // pi(sum);
      if(sum%3 == 0 && dig%2 == 0 && dig%5 == 0) {
        c[i] += 1;
      }
    }

    sum = s[n-2];
    dig = a[n-2];
    c[n-1] = c[n-2];
    if(sum%3 == 0 && dig%2 == 0 && dig%5 == 0) {
      c[n-1] += 1;
    }

    int qn;
    si(qn);
    // fo(i, n) pi_(c[i]);
    fo(i, qn) {
      int l, r;
      si(l); si(r);
      l--, r--;
      int ans = 0;
      if(l == 0) ans = c[r];
      else ans = c[r]-c[l-1];
      pi(ans);
    }

    return 0;
}
