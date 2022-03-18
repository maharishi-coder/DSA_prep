#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
#define int ll
typedef long double ld;
const ll INF=1e18;
const ll M=1e9+7;
const ll MOD = 998244353;
double eps = 1e-12;
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << ln;
#else
#define debug(x)
#endif

//Debug stuff:
template <typename T>
void _print(T &t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void print(stack<int>&st){
    int len=sz(st);
    if(len==0) return;
    int val=st.top();
    st.pop();
    print(st);
    cout<<val<<" ";
}


void deleteMid(stack<int>&st,int mid){
    
    if(st.size()==mid){
        st.pop();
        return;
    }
    int val=st.top();
    st.pop();
    deleteMid(st,mid);
    st.push(val);
    
    
}

void solve(){
    int n;
    cin>>n;
    stack<int>st;
    forn(i,n){
        int k;
        cin>>k;
        st.push(k);
    }
    int mid=(n/2)+1;
    deleteMid(st,mid);
    print(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<ln;
}

signed main()
{
//FUCK the rating, Just learn & grow after every contest!!! BEST of luck maharishi...you can do it..believe that...
 fast_cin();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   freopen("error.txt", "w", stderr);
#endif

 ll t=1;
 cin >> t;
 while(t--) {
     solve();
 }
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
 return 0;
}