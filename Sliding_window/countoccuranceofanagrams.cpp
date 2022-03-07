/*
1. map the pattern
2. count the distinct letter in map
3. start the window (j<n)
4. if the arr[j] present in map decrease the map value
5. and check if(map[arr[j]]==0) the count--;
6. if (j-i+1==k) then check count is 0 or not if 0 the ans++;
8. before slide the window we just reverse the process
9. means if arr[i] present in map the map[arr[i]]++;
10.then check if(map[arr[i]]==1) then count++;
11. i++,j++;
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

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
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << ln;
#else
#define debug(x)
#endif

// Debug stuff:
template <typename T>
void _print(T &t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.fi);
    cerr << ",";
    _print(p.se);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(unordered_set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string str, patr;
    cin >> str >> patr;
    unordered_map<char, int> umpp;
    for (int i = 0; i < k; i++)
    {
        umpp[patr[i]]++;
    }
    int start = 0, end = 0, ans = 0, count = umpp.size();
    while (end < n)
    {
        if (umpp.find(str[end]) != umpp.end())
        {
            umpp[str[end]]--;
            if (umpp[str[end]] == 0)
            {
                count--;
            }
        }

        if (end - start + 1 == k)
        {
            if (count == 0)
            {
                ans++;
            }
            if (umpp.find(str[start]) != umpp.end())
            {
                umpp[str[start]]++;
                if (umpp[str[start]] == 1)
                {
                    count++;
                }
            }
            start++;
        }
        end++;
    }
    cout << ans << ln;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}