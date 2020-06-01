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

const int MAX = (1e2)+5;
int a[MAX], b[MAX];

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    si(t);

    while(t--) {
      memset(a, 0, sizeof(a));
      memset(b, 0, sizeof(b));
      int i, n, x;
      si(n);

      fo(i, n) si(x), a[x]+=1;
      fo(i, n) si(x), b[x]+=1;

      int aScore = INT_MIN, bScore = INT_MIN, aF = 0, bF = 0;

      fo(i, MAX) {
        if(aF <= a[i]) aF = a[i], aScore = i;
        if(bF <= b[i]) bF = b[i], bScore = i;
      }

      string ans;

      if(aScore == bScore) ans = "Tie";
      else if(aScore > bScore) ans = "Rupam";
      else ans = "Ankit";

      ps(ans.c_str());

    }

    return 0;
}

