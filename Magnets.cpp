#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, groups = 0;
    cin >> n;
    string s, prev = "00";
    for(int i = 0; i < n; i++){
        cin >> s;
        if (s != prev){
            groups++;
        }
        prev = s;
    }
    cout << groups;
    return 0;
}
