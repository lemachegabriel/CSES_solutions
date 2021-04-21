#include <iostream>
using namespace std;
 
int function(int r,int l)
{
    int count = 0;
    string ans;
 
    if((r + l)%3==0 && min(r, l)*2 >= max(r,l)){
        ans = "YES";
   }else ans = "NO";
    count+=1;
    cout<< ans << "\n";
}
 
 
int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int l, r; cin >> l >> r;
        function(r, l);
 
    }   
    return 0;
}
