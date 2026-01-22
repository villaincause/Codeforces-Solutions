#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int s, len, ch = INT_MIN, ans;
        cin >> s;
        char str[s];
        cin >> str;
        len = strlen(str);
        for(int i = 0; i < len; i++)
        {
            if(str[i] > ch)
            {
                ch = str[i];
                ans = ch - 96;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

