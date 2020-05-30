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

const int MAX = (1e4)+5;
const int MOD = (1e9)+7;

int a[MAX];

bool cmp(pii &a, pii &b) {
	if(a.F != b.F)
		return a.F < b.F;
	return a.S <= b.S;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int i, n, r, sum = 0;
    si(n);
    fo(i, n)
      si(a[i]), sum += a[i];

	
    vpii ans;
    fo(i, n) {
      int currSum = 0;
      for(int j = i; j < n; j++) {
        currSum += a[j];
        double currSize = j-i+1;
        double remSize = n - currSize;
        if(remSize == 0) {
          ans.pb({i, j});
          continue;
        }
        double currAvg = ((double)currSum)/currSize;
        double remAvg = ((double)(sum-currSum))/remSize;
        // printf("%d %d %d %d %d %lf %lf\n",i, j, a[i], currSum, sum-currSum, currAvg, remAvg);
        if(currAvg > remAvg)
          ans.pb({i, j});
      }
    }

    sort(ans.begin(), ans.end(), cmp);

    pi(ans.size());
    for(pii x : ans) 
      pi_(x.F+1), pi(x.S+1);

    return 0;
}
