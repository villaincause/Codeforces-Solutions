#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s = "EASY";
    cin >> n;
    int ar[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] == 1)
        {
            s = "HARD";
        }
    }
    cout << s << endl;
}
