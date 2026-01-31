#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n; j++){
            if(i == ar[j]){
                cout << j + 1 << " ";
            }
        }
    }
    return 0;
}
