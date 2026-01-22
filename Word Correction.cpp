#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int length;
    cin >> length;
    char s[length];
    cin >> s;
    int count = 0;
    for(int i =0; i < length; i++)
    {

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            if(s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u' || s[i+1] == 'y'){
            for(int j = i+1; j < length; j++)
            {
                s[j] = s[j+1];
                i = -1;
            }
            }
        }
    }
    cout << s;
    return 0;
}
