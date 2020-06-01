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

const int MAX = (2e5)+5;
ll a[MAX];
ll la[MAX], ra[MAX];

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    si(t);

    while(t--) {
      memset(a, 0, sizeof(a));
      memset(la, 0, sizeof(la));
      memset(ra, 0, sizeof(ra));
      int i, n, x;
      si(n);

      fo(i, n) sl(a[i]);

      for(i = 0; i < n;) {
        int j = i+1;
        while(j < n && a[j] >= a[j-1]) j++;
        for(int p = i; p < j; p++) la[p] = p-i;
        i = j;
      }

      for(i = 0; i < n;) {
        int j = i+1;
        while(j < n && a[j] <= a[j-1]) j++;
        for(int p = i; p < j; p++) la[p] = max(la[p], (ll)p-i), la[p] = -la[p];
        i = j;
      }

      for(i = n-1; i >= 0;) {
        int j = i-1;
        while(j >= 0 && a[j] >= a[j+1]) j--;
        for(int p = i; p > j; p--) ra[p] = i-p;
        i = j;
      }

      for(i = n-1; i >= 0;) {
        int j = i-1;
        while(j >= 0 && a[j] <= a[j+1]) j--;
        for(int p = i; p > j; p--) ra[p] = max(ra[p], (ll)i-p);
        i = j;
      }
      ll maxM = INT_MIN;
      fo(i, n) {
        ra[i] = max(abs(a[i]-a[i+la[i]]), abs(a[i]-a[i+ra[i]]));
        maxM = max(ra[i], maxM);
      }

      pl(maxM);

    }

    return 0;
}

