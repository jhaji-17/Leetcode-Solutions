/**
 *    author:  Abhinav Kumar Jha
 *    created: 05.07.2026 20:19:33
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
    string s,t;cin>>s>>t;
    ll i=s.size()-1,j=t.size()-1,skip1=0,skip2=0;
    while (i>=0||j>=0)
    {
        // finding valid character in string s;
        while(i>=0)
        {
            if(s[i]=='#') {skip1++;i--;}
            else
            {
                if(skip1>0) {skip1--;i--;}
                else {break;}
            }

        }
        // finding valid character in string t;
        while(j>=0)
        {
            if(t[j]=='#') {skip2++;j--;}
            else
            {
                if(skip2>0) {skip2--;j--;}
                else {break;}
            }

        }
        // charatcers match or not
        if(i>=0&&j>=0&&s[i]!=t[j])
        {
            cout<<0;
            return;
        }
        if((i>=0)!=(j>=0))
        {
            cout<<0;
            return;
        }
        i--;j--;
    }
    cout<<1;
    
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