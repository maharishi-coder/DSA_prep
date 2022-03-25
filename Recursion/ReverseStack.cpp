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
 
void insert(stack<int>&st,int tp){
    if(st.size()==0){
        st.push(tp);
        return;
    }
    int k=st.top();
    st.pop();
    insert(st,tp);
    st.push(k);
}

void reverse(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int tp=st.top();
    st.pop();
    reverse(st);
    insert(st,tp);
}
void solve(){
    int n;
    cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        st.push(k);
    }
    stack<int>st_cp(st);
    cout<<"before reverse>>>"<<ln;
    while(!st_cp.empty()){
        cout<<st_cp.top()<<" ";
        st_cp.pop();
    }
    cout<<ln;
    reverse(st);
    cout<<"after reverse>>>>>"<<ln;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
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