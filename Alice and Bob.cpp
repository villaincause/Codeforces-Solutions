#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a;
        cin >> n >> a;
        vector<int> ar(n);
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
        }

        int left = 0, right = 0;
        for(int x : ar)
        {
            if(x < a)
            {
                left++;
            }
            else if(x > a)
            {
                right++;
            }
            else ;
        }

        if(left >= right)
        {
            cout << a-1 << endl;
        }
        else
        {
            cout << a+1 << endl;
        }
    }
}
