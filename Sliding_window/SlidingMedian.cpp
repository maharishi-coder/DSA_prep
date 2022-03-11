/*

Sliding Median is really good question 
hint- ordered set will be used 
input:->9 3
2 4 3 5 8 1 2 1 5
output:-> 3 4 5 5 2 1 2 
problem link:- https://cses.fi/problemset/task/1076
*/

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
#define int ll
typedef long double ld;
const ll INF = 1e18;
const ll M = 1e9 + 7;
const ll MOD = 998244353;
double eps = 1e-12;
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ar array

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    int start = 0, end = 0;
    ordered_set<ar<int, 2>> st;
    while (end < n)
    {
        st.insert({a[end], end});
        if (end - start + 1 == m)
        {
            cout << (*st.find_by_order((m - 1) / 2))[0] << " ";
            st.erase({a[start], start});
            start++;
        }
        end++;
    }
}

signed main()
{
    // FUCK the rating, Just learn & grow after every contest!!! BEST of luck maharishi...you can do it..believe that...
    fast_cin();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}