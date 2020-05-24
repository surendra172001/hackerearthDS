#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = (1e5) + 5;

bool prime[MAX];
int pSum[MAX];

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
    
    // for(int i = 0; i < 10; i++) cout << prime[i] << " ";
    
	pSum[0] = pSum[1] = 0;
	for(int i = 2; i < MAX; i++) 
		pSum[i] = pSum[i-1] + prime[i];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    sieve();

    int t;
    cin >> t;
    while(t--) {
      int l, r;
      cin >> l >> r;
      if(l == r) {
        cout << 0 << "\n";
        continue;
      }
      int k = r-l+1;
      int p = pSum[r] - pSum[l-1];
      cout << p * (k-p-(l<=1)) << "\n";
	}

    return 0;
}
