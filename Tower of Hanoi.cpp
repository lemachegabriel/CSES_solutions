#include <bits/stdc++.h>
using namespace std;
  
void fun(int n, int a, int c, int b )
{
    if(n == 1) {
        cout << a << " " << c << endl;
        return;
    }
 
    fun(n - 1, a, b, c);
    cout << a << " " << c << endl;
    fun(n - 1, b, c, a);
}
 
int main()
{
    int n; cin >> n;
    cout << (1 << n) - 1 << endl;
    fun(n, 1, 3, 2); 
    return 0;
}
