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

const int MAX = (1e5)+5;
bool prime[MAX];
char c[MAX];

void sieve()
{	
	prime[2] = true;
	for(int i = 3; i < MAX; i += 2) prime[i] = true;
    for (int p=3; p*p<MAX; p += 2) { 
        if (prime[p]) { 
            for (int i=p*p; i < MAX; i += p) 
                prime[i] = false; 
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    sieve();
    int t;
    si(t);
    while(t--) {
      int i, n, a[26]={};
      ss(c);
      string s(c);
      // ps(s.c_str());
      for(char ch : s)
        a[(int)ch - (int)'a'] += 1;

      int dCnt = 0;
      for(i = 0; i < 26; i++) dCnt += (a[i] == 0 ? 0 : 1);
      string ans = "NO";
      if(!prime[dCnt]) {
        ps(ans.c_str());
        continue;
      }

      bool flag = true;
      fo(i, 26) {
        if(a[i] != 0 && !prime[a[i]]) {
          flag = false;
          break;
        }
      }

      if(flag) ans = "YES";

      ps(ans.c_str());
    }

    return 0;
}

