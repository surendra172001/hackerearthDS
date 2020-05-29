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

int pr[10];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t, i, j;
    cin >> t;
    while(t--) {
	    memset(pr, 0, sizeof(pr));
      string str;
      cin >> str;
      for(char ch : str) pr[(int)ch - 48] = 1;

      i = 0;
      while(!pr[i] && i <= 9) i++;
      j = 9;
      while(!pr[j] && j >= 0) j--;

      bool flag = true;
      for(int r = i; r <= j; r++) {
          if(!pr[r]) {
              flag = false;
              break;
          }
      }

      flag = flag && (j-i+1 == str.length());

      string ans;
      if (flag) ans = "YES\n";
      else ans = "NO\n";
      cout << ans;
    }

    return 0;
}
