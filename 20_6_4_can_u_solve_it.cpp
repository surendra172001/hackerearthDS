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
int arr[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    si(t);
    while(t--) {
      int i, n;
      si(n);
      fo(i, n) si(arr[i]);
      int max1 = INT_MIN, min1 = INT_MAX;
      int max2 = INT_MIN, min2 = INT_MAX;
      for (int i = 0; i < n; i++) {
        max1 = max(max1, arr[i] + i);
        min1 = min(min1, arr[i] + i);
        max2 = max(max2, arr[i] - i);
        min2 = min(min2, arr[i] - i);
      }
      pi(max(abs(max1 - min1), abs(max2 - min2)));
    }

    return 0;
}

