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

const int MAX = (1e5)+5;
const int MOD = (1e9)+7;

int a[MAX];

// printf("%d %d %d %d %d %lf %lf\n",i, j, a[i], currSum, sum-currSum, currAvg, remAvg);

void dig(int n, map<int, int> &m) {
	set<int> s;
	while(n) {
		int d = n%10;
		n /= 10;
		s.insert(d);
	}
	for(int x : s) {
		m[x] += 1;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    si(t);
    while(t--) {
      int i, n;
      si(n);

      fo(i, n)
        si(a[i]);

      map<int, int> m;

      fo(i, n)
        m[a[i]] += 1;

      pii p = (*m.begin());

      string ans;
      if(p.S%2)
        ans = "Lucky\n";
      else
        ans = "Unlucky\n";

      ps(ans.c_str());
    }

    return 0;
}
