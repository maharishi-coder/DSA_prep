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
 

void solve(){
    string s;
    cin>>s;
    int len=sz(s);
    int start=0,end=0,maxLen=0;
    unordered_map<int,int>ump;
    while(end<len){
        ump[s[end]]++;
        /*
        Approach 1.
        we will compare the map value if that character value is 1 then the possible ans candidate is present
        if character value is greater than 1 it means there is repeating character then we will remove the character
        from starting until value is <=1;

        if(ump[s[end]]==1){
            maxLen=max(maxLen,end-start+1);
        }else if(ump[s[end]]>1){
            while(ump[s[end]]>1){
                ump[s[start]]--;
                start++;
            }
        }
        */

       /*Approach 2
       we will compare the size of map because size will show that how many unique character does have map
       so will compare the size with window length(j-i+1) if(map.size==j-i+1) then possible ans candidate is preset 
       if(map.size<j-i+1) example abb i=0,j=2 map[a]=1 map[b]=2 the size of map is 2 and the window len 2-0+1=3
       in that case we have to remove the element from starting unti size<=j-i+1
       
       */
       if(ump.size()==end-start+1){
           maxLen=max(maxLen,end-start+1);
       }else if(ump.size()<end-start+1){
           while(ump.size()<end-start+1){
               ump[s[start]]--;
               if(ump[s[start]]==0) ump.erase(s[start]);
               start++;
           }
       }
        
        end++;
    }
    cout<<maxLen<<ln;
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
 return 0;
}