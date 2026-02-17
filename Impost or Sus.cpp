#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, c;
    cin >> n;
    string r;
    for(int i = 0; i < n; i++)
    {
        cin >> r;
        c = 0;
        s = r.size();

        for (int j = 0; j < s; j++)
        {
            if (r[j] == 'u')
            {
                if (j == 0 || j == s-1)
                {
                    c++;
                }
                else if (r[j+1] != 's')
                {
                    c++;
                    j++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
