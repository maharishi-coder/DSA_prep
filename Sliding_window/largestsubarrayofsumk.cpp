/*
arr[]= {4,1,1,1,2,3,5}, sum=5;
possible sumbarray is [[4,1,1],[1,1,1,2],[2,3],[5]] so the largest subarray is [1,1,1,2] size is 4
#identification
the size of window is not given hence it is the question of variable size sliding window
the sum is given which is equal to k

 ----Approach
 step1. we will find the sum of all size subarray
 step2. check sum is less then k if yes then j++;
 step3. else if sum==k then possible ans candidate is found so, ans=max(ans,j-i+1) 
 step4. else if sum>k then we have to descrease the window size or sum for that we will descrease the sum until sum<k 
 for that sum-=arr[i]  
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
    int n;
    cin>>n;
    vector<int>arr(n);
    forn(i,n) cin>>arr[i];
    int k,sum=0,start=0,end=0,ans=0;
    cin>>k;
    while(end<k){
        sum+=arr[end];
        if(sum<k) end++;
        else if(sum==k){
            ans=max(ans,end-start+1);
            end++;
        }
        else{
            // sum>k
            while(sum>k){
                sum-=arr[start];
                start++;
            }
            end++;
        }
    }
    cout<<ans<<ln;
    

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