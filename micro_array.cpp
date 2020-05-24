#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = (1e9) + 7;
const int MAX = (1e6) + 5;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
      int n, k;
      cin >> n >> k;
      int arr[n];
      for(int i = 0; i < n; i++) cin >> arr[i];
      int minM = INT_MAX;
      for(int i = 0; i < n; i++) minM = min(minM, arr[i]);
      if(minM <= k) cout << (k-minM) << "\n";
      else cout << 0 << "\n";
    }

    return 0;
}
