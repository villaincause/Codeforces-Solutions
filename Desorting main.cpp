#include<bits/stdc++.h>
using namespace std;
int main()
{

    int time;
    cin >> time;
    for(int k = 1; k <= time; k++)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        bool sorted = true;
        int diff = INT_MAX;
        for(int i = n-1; i > 0; i--)
        {
            diff = min(ar[i] - ar[i-1], diff);
            sorted &= ar[i] >= ar[i-1];
        }
        if(!sorted)
        {
            cout << 0 << endl;
            continue;
        }
        cout << diff/2 + 1 << endl;

    }
    return 0;
}
