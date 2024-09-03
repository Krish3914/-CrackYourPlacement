#include <bits/stdc++.h>
using namespace std;
static const int fast = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return 0;
}();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<=1){
            cout<<n;
        }
        else{
            int ans = ((n-1)*k)+1;
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}
