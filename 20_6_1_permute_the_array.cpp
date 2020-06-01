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
#define ps(s)	printf("%s\n",s)
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
const int MAX = (1e5) + 1;

int a[MAX];

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    si(t);

    while(t--) {
      memset(a, 0, sizeof(a));
      int n, k, i, x;
      si(n);si(k);
      fo(i, n) si(x), a[x] += 1;
      int cnt = n/k;
      bool flag = true;
      fo(i, MAX) {
        if(a[i]%cnt) {
          flag = false;
          break;
        }
      }
      string ans;
      if(flag) ans = "YES";
      else ans = "NO";
      ps(ans.c_str());
    }

    return 0;
}
