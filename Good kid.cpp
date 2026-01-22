#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, min = INT_MAX;
        long long ans = 1;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if(ar[i] < min)
            {
                min = ar[i];
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(ar[i] == min)
            {
                ar[i]++;
                for(int j = 0; j < n; j++)
                {
                    ans *= ar[j];
                }
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}
