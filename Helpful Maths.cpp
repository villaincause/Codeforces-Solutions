#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i = 0;
    char input[100];
    cin >> input;
    int length = strlen(input);
    while(i < length)
    {
        int change = 0;
        if(input[i] == '+')
        {
            i++;
            continue;
        }
        else
        {
            for(int j = i-2; j >= 0; j-=2)
            {
                char temp;
                if(input[j] > input[i])
                {
                    temp = input[j];
                    input[j] = input[i];
                    input[i] = temp;
                    change++;
                }
            }
            if(change == 0)
            {
                i++;
            }
            else
            {
                i = 0;
            }
        }
    }
    cout << input;
    return 0;
}
