#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
 
int main(){
    ll n;
    cin >> n;
    ll r = n*(n+1)/2;
    ll sum1=0;
    vector<ll> ans1, ans2;
    if(r%2!=0){
        cout << "NO";
        return 0;
    }
    for(ll i=n; i>0; i-=1){
        if(sum1+i<=r/2){
            ans1.push_back(i);
            sum1 += i;
        }else{
            ans2.push_back(i);
        }
    }
    
    cout << "YES" << "\n";
    cout << ans1.size() << endl;
    for(ll h=0; h<ans1.size(); h++)
        std::cout << ans1[h] << ' ';
    cout << "\n" << ans2.size() << endl;
    for(ll h=0; h<ans2.size(); h++)
        std::cout << ans2[h] << ' ';
}
