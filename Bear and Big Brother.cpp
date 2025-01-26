#include<iostream>
using namespace std;
int main()
{
    int l, b, j = 1;
    cin >> l;
    cin >> b;

    for(int i = 0; i < j; i++)
    {
        l *= 3;
        b *= 2;
        if(l > b)
        {
            cout << j;
            break;
        }
        else
        {
            j++;
        }
    }
    return 0;
}
