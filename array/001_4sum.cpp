/**
 *    author:  Abhinav Kumar Jha
 *    created: 25.06.2026 01:58:30
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
    vi v; ll n,target; cin>>n>>target; vin(v,n);
    
        sort(v.begin(),v.end());
        vvi ans;
        for (int i = 0; i < n; i++)

        {
            if(i>0&&v[i-1]==v[i])
            {
                continue;
            }
            for (int j = i+1; j< n; j++)

            {
                if(j>i+1&&v[j]==v[j-1]) continue;
                ll k=j+1,l=n-1;
                while (k<l)
                {
                    ll temp=v[i]+v[j]+v[k]+v[l];
                    if(temp<target)
                    {
                        k++;
                    }
                    else if (temp>target)
                    {
                        l--;
                    }
                    else
                    {
                        ans.push_back({v[i],v[j],v[k],v[l]});
                        k++;
                        l--;
                    }
                    while (k<l&&v[k]==v[k-1]) k++;
                    while (k<l&&v[l]==v[l+1]) l--;

                    
                        
                    
                    
                }
                
            }
            
        }
        debug(ans);


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