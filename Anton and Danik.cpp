#include <bits/stdc++.h>
using namespace std;
int main()
{
    string result;
    int a = 0, d = 0, s;
    cin >> s >> result;

    while(s--)
    {
        if(result[s] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if(a > d)
    {
        cout << "Anton";
    }
    else if(d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}

