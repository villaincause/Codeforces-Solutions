#include<iostream>
using namespace std;
int main()
{
    int n, temp, i;
    cin >> n;
    temp = n;
    for(i = 1; i = i; i++)
    {
        int sum =0;
        while(temp != 0)
        {
            sum += temp%10;
            temp /= 10;

        }
        cout << sum << endl;
        if(n <= 9)
        {
            cout << 0;
            break;
        }

        else if(n >= 10)
        {

            if(sum <= 9)
            {
                cout << i;
                break;
            }
            else
            {
                temp = sum;
            }
        }
    }
    return 0;

}
