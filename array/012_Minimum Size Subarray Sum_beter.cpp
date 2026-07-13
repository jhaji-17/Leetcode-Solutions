/**
 *    author:  Abhinav Kumar Jha
 *    created: 13.07.2026 21:58:10
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
    ll n,target;cin>>n>>target;
    vi v; vin(v,n);
    ll current_sum=0,current_size=INT_MAX,left=0;
    for ( ll right = 0; right < n; right++)
    {
        current_sum+=v[right];
        while(current_sum>=target&&left<=right)
        {
            current_sum-=v[left];
            current_size=min(current_size,right-left+1);
            left++;

        }
    }
    cout<<((current_size==INT_MAX)?1:current_size)<<endl;
    
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