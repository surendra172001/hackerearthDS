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
const ll MOD = (1e9)+7;

int a[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    si(t);

    while(t--) {
      int i, n, d[3];
      si(n);si(d[0]);si(d[1]);si(d[2]);
      fo(i, n) si(a[i]);
      bool flag = true;
      set<int> s;
      fo(i, n) {
        int x = a[i];
        for(int j = 0; j < 3; j++) {
          if(x%d[j] == 0) {
            while(x%d[j] == 0) x /= d[j];
          }
        }
        s.insert(x);
        if(s.size() > 1) {
          flag = false;
          break;
        }
      }
      string ans;
      if(flag) ans = "She can";
      else ans = "She can't";
      ps(ans.c_str());
    }
    
    return 0;
}
