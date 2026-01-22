#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, c, n, sum;
        cin >> a >> b >> c >> n;
        long long largest = max(a, max(b, c));

        sum = a + b + c + n;
        if(sum % 3 == 0 && sum/3 >= largest){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

