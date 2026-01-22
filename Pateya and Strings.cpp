#include<bits/stdc++.h>
using namespace std;
int main()
{
    int check = 0;
    char string1[100], string2[100];
    cin >> string1 >> string2;
    int length = strlen(string1);
    for(int i = 0; i < length; i++)
    {
        if (string1[i] != string2[i]+32 || string1[i] != string2[i]-32)
        {
            if(string1[i] >= 97)
            {
                string1[i] = string1[i]-32;
            }
            if(string2[i] >= 97)
            {
                string2[i] = string2[i]-32;
            }
            if(string1[i] < string2[i])
            {
                check = -1;
                break;
            }
            else if(string1[i] > string2[i])
            {
                check = 1;
                break;
            }
        }
    }

    cout << check;
    return 0;
}
