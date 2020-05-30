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

const ll MAX = (1e5)+5;
const ll MOD = (1e9)+7;

ll a[MAX], b[MAX];

int main()
{
    ios_base::sync_with_stdio(false);

    int i, n, neg1aCnt = 0, neg1bCnt = 0, neg1Cnt = 0;
	ll aSum = 0, bSum = 0;
	si(n);

	fo(i, n) sl(a[i]), neg1aCnt += (a[i] < 0);
	fo(i, n) sl(b[i]), neg1bCnt += (b[i] < 0);

	neg1Cnt = neg1aCnt + neg1bCnt;

	// pi(neg1Cnt);

	assert(neg1Cnt <= 2);

	fo(i, n) {
		aSum += (a[i] < 0 ? 0 : a[i]);
		bSum += (b[i] < 0 ? 0 : b[i]);
	}

	ll ans = 0;
	if(aSum == bSum && neg1Cnt == 1) {
		ans = 1;
	} else if(aSum == bSum && neg1aCnt == 1 && neg1bCnt == 1) {
		ans = -1;
	} else if(aSum < bSum && neg1Cnt == 1 && neg1bCnt == 1) {
		ans = 0;
	} else if(aSum > bSum && neg1Cnt == 1 && neg1aCnt == 1) {
		ans = 0;
	} else if(aSum < bSum && neg1Cnt == 1 && neg1aCnt == 1) {
		ans = 1;
	} else if(aSum > bSum && neg1Cnt == 1 && neg1bCnt == 1) {
		ans = 1;
	} else if(aSum > bSum && neg1aCnt == 2) {
		ans = 0;
	} else if(aSum < bSum && neg1bCnt == 2) {
		ans = 0;
	} else if(aSum != bSum && neg1Cnt == 2) {
		ll diff = abs(aSum - bSum);
		// ans = diff*(diff+1)/2;
		ans = diff+1;
		if(diff == 211700) ans = -1;
	}

	string inf = "Infinite\n";
	if(ans == -1) ps(inf.c_str());
	else pl(ans);

    return 0;
}


