#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x, count = 0, sum = 0;
    cin >> x;
    string a, b;
    cin >> a;
    cin >> b;
    for(int i = 0; i < x; i++)
    {
        if(a[i] != b[i])
        {
            if(count == 0)
            {
                sum += i+1;
                count++;
            }
            else
            {
                sum -= i+1;
                cout << sum << endl;
                count--;
            }
        }
    }
    int ans = abs(sum);
    cout << ans;


}
