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

const int MAX = (5e3) + 5;
const ll MOD = (1e9) + 7;

ll a[MAX], b[MAX];

int main()
{
    ios_base::sync_with_stdio(false);

    ll i, n;
    sl(n);
    fo(i, n) sl(a[i]);
    fo(i, n) sl(b[i]);

    sort(b, b+n);

    ll ans = 0;

    for(i = 0; i < n; i++) {
      for(ll j = i+1; j < n; j++) {
        if(a[j] > a[i]) {
          ans += (ll)n - (upper_bound(b, b+n, a[j]) - b);
        }
      }
    }

    pl(ans);

    return 0;
}
