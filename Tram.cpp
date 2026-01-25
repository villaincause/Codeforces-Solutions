#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, d = 0;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        c[i] = d = d - a + b;
    }
    cout << *max_element(begin(c), end(c));
    return 0;
}
