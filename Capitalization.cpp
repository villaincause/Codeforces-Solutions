#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char input[1000];
    cin >> input;
    if(input[0] >= 97)
    {
        input[0] -= 32;
    }
    cout << input;
    return 0;
}
