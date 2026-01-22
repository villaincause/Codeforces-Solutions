#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n, output = 0;
    cin >> n;
    char s[n];
    cin >> s;
    char temp = s[0];
    for(int i = 1; i < n; i++)
    {
        if(s[i] == temp){
            output++;
        }
        temp = s[i];
    }
    cout << output;
    return 0;
}
