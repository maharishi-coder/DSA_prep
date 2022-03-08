/*
str= aabacbebebe
k=3
possible substring is [aabacb,cbebebe] maxlen substring is 7;
>>>Approach
step1.we will map the character and count the unique character
step1.if map.size<k j++;
step2. if map.size==k the possible ans candidate is present then compare with maxlen=max(maxlen,j-i+1)
step3. if map.size>k then we have to remove the character form start until map is less than or equal to k
*/

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
    int len=sz(s),k;
    cin>>k;
    int start=0,end=0,count=0,maxLen=0;
    unordered_map<char,int>ump;
    while(end<len){
        ump[s[end]]++;
        if(ump.size()<k) end++;
        else if(ump.size()==k){
            maxLen=max(maxLen,end-start+1);
            end++;
        }else{
            // size>k means unique character is > k
            while(ump.size()>k){
                ump[s[start]]--;
                if(ump[s[start]]==0){
                    ump.erase(s[start]);
                }
                start++;
            }
            end++;
        }
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