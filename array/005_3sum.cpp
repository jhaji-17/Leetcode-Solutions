/**
 *    author:  Abhinav Kumar Jha
 *    created: 30.06.2026 15:54:02
**/

#include <bits/stdc++.h>

// --- For Debugging & Failcheck ---
#ifdef LOCAL
#include "algo/debug.h"
#include <unistd.h> // Required for alarm()
#else
#define debug(...) 42
#endif
// -------------------

using namespace std;

#define ll long long int
#define endl '\n'

// --- Type Definitions ---
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> ii;
typedef vector<ii> vp;

// --- Shorthand Macros ---
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define pb push_back

// --- I/O Helper Functions ---
void vin(vi &a, ll n) {
    a.resize(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
}

void pin(const vi &a) {
    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << (i == a.size() - 1 ? "" : " ");
    }
    cout << endl;
}

// --- Main Solve Function ---
void solve() {
    vi v; ll n ; cin>>n;
    sort(v.begin(),v.end());
    vvi ans;
    for (int i = 0; i < n; i++)
    {
        if(i>0&&v[i]==v[i-1]) continue;
        ll k = n-1;
        ll j=i+1;
        while (j<k)
        {
            if(j>i+1&&v[j]==v[j-1])
            {
                j++;continue;
            }
            if(v[j]+v[i]+v[k]>0)
            {
                k--;
            }
            else if(v[i]+v[j]+v[k]<0)
            {
                j++;
            }
            else
            {
                ans.push_back({v[i],v[j],v[k]});
                j++;
                k--;
            }
        }
        
    }
    
}

// --- Main Function ---
int32_t main() {
    #ifdef LOCAL
    alarm(3); // Failcheck: Kills program after 3 seconds locally to prevent OS crashes
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}