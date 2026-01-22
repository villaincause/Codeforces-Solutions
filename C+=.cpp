#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, n, max, min, i = 1;
        cin >> a >> b >> n;
        if(a > b){
            max = a;
            min = b;
        }
        else{
            max = b;
            min = a;
        }
        while(a <= n && b <= n){
            if(i % 2 != 0){
                min += max;
            }
            else{
                max += min;
            }
            if(max > n){
                cout << i << endl;
                break;
            }
            else if(min > n){
                cout << i << endl;
                break;
            }
            else{
            i++;
            }
        }
    }
    return 0;
}
