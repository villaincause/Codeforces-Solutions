#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int dletters = 0;
    char username[100];
    cin >> username;
    int length = strlen(username);
    int num = length;
    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j < length; j++)
        {
            if(username[i] == username[j])
            {
                num--;
                break;
            }
        }
    }
    if(num%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}
