/**
 *    author:  Abhinav Kumar Jha
 *    created: 05.07.2026 21:28:03
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
    ll n;cin>>n;    
    vi v;vin(v,n);
    ll first=-1,last=-1,mn =INT_MAX,mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<mx)
        {
            last=i;
        }
        else
        {
            mx=v[i];
        }
    }
    if(last==-1) 
    {
        cout<<0;return;
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i]>mn)
        {
            first=i;
        }
        else
        {
            mn=v[i];
        }
    }
    


    debug(v);
    cout<<last-first+1;
    
}

// --- Main Function ---
int32_t main() {
    #ifdef LOCAL
    alarm(3); // Failcheck: Kills program after 3 seconds locally to prevent OS crashes
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}