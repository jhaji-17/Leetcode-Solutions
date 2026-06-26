/**
 *    author:  Abhinav Kumar Jha
 *    created: 26.06.2026 23:57:56
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
    int n,m; cin>>n>>m;
    vector<int> nums1(n); for(int i =0;i<n; i++) cin>>nums1[i];
    vector<int> nums2(m); for(int i =0;i<m; i++) cin>>nums2[i];


 
    for (int i = 0; i < n; i++)
    {
        nums1.push_back(0);
    }
    debug(nums1);
    int left=m-1,right=n-1,current=m+n-1;
    while (left>=0&&right>=0)
    {
        if(nums1[left]>=nums2[right])
        {
            nums1[current]=nums1[left];
            left--;
            
        }
        else
        {
            nums1[current]=nums2[right];
            right--;
        }
        current--;

    }
    while(right>0)
    {
        nums1[current]=nums2[right];
        current--;right--;
    }
    debug(nums1);
}
// --- Main Function ---
int32_t main() {
    #ifdef LOCAL
    alarm(3); // Failcheck: Kills program after 3 seconds locally to prevent OS crashes
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}