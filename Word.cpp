#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int tlow = 0, tup = 0;
    char s[100];
    cin >> s;
    int length = strlen(s);
    for(int i = 0; i < length; i++)
    {
        if(s[i] <= 90)
        {
            tup++;
        }
        else
        {
            tlow++;
        }
    }
    if(tup > tlow)
    {
        for(int i = 0; i < length; i++)
        {
            if(s[i] >= 97)
            {
                s[i] -= 32;
            }
        }
    }
    else
    {
        for(int i = 0; i < length; i++)
        {
            if(s[i] <= 90)
            {
                s[i] += 32;
            }
        }
    }
    cout << s;
}
