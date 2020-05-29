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

const int MAX = (1e5)+5;

int a[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    si(t);
    while(t--) {
      int i, n, k;
      si(n);
      fo(i, n) si(a[i]);
      int maxLen = 0;
      i = 0;
      while(i < n) {
          if(a[i]%2) {
              i++;
              continue;
          }
        int j = i;
        while(j < n && (a[j]%2 == 0)) j++;
        j--;
        int currLen = j-i+1;
        maxLen = max(maxLen, currLen);
        i = j+1;
      }
      pi(maxLen == 0 ? -1 : maxLen);
    }

    return 0;
}
