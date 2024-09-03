#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        // cout<<"hi";
        int x, n;
        cin >> x >> n;
        // brute_force
        cout << pow(x, n) << ";" << endl;
        /*pow(x,n) is written as:
                int ans = 1;
                for(int i=1; i<=n; i++){
                    ans*=x;
                }
                cout<<ans<<endl;
        */

        // optimised
        cout << "optimised : " << " ";
        int ans = 1;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                x *= x;
                n /= 2;
            }
            else
            {
                ans *= x;
                n -= 1;
            }
        }
        cout << ":" << ans << endl;
        t--;
    }
    return 0;
}

// Press (ctrl + shift + B) to run on VS-code