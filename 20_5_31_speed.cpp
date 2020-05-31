#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pi_(x) printf("%d ", x)
#define pl(x) printf("%lld\n", x)
#define pl_(x) printf("%lld ", x)
#define ps(s) printf("%s\n", s)
#define nl printf("\n")
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int MAX = (1e5) + 5;
const ll MOD = (1e9) + 7;

int dp[MAX], a[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    si(t);

    while (t--) {
		memset(dp, 0, sizeof(dp));
        int i, n;
		si(n);
		fo(i, n) si(a[i]);
		int cnt = 1, maxM = a[0];
		for(i = 1; i < n; i++) {
			if(a[i] <= maxM) {
				cnt += 1;
				maxM = a[i];
			}
		}
		pi(cnt);
    }

    return 0;
}
