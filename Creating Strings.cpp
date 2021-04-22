#include <bits/stdc++.h>
 
using namespace std;
  
void fun(string x){
 
    sort(x.begin(), x.end());
    vector<string> v;
    
    do{
        v.push_back(x);
    }while(next_permutation(x.begin(), x.end()));
 
    cout << v.size() << endl;
 
    for(string y : v){
        cout << y << endl;
    }
 
}
 
int main()
{
    string x; cin >> x;
    fun(x); 
    return 0;
}
