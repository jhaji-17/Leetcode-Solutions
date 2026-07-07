/**
 *    author:  Abhinav Kumar Jha
 *    created: 08.07.2026 00:47:24
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
    vector<string> logs; ll n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin>>temp;
        logs.push_back(temp);
    }
    ll debt=0;
    for (int i = 0; i < n; i++)
    {
        string temp =logs[i];
        if(temp[0]!='.')
        {
            debt++;
        }
        else if (temp=="../"&&debt>0)
        {
            debt--;
        }
        
    }
    cout<<debt;
    
    
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