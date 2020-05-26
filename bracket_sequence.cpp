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

const int MAX = (1e6);

char s[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    scanf("%s", s);
    int n = strlen(s);
    // ps(s);
    int i = 0, diff = 0, mn = (1e9)+7, ans = 0;;
    fo(i, n){
      if(s[i] == '(') diff += 1;
      else diff -= 1;
      if(mn > diff) mn = diff, ans = 0;
      if(mn == diff) ans += 1;
    }

    if(diff) ans = 0;

    pi(ans);
	
    return 0;
}

