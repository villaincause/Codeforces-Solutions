#include <iostream>
using namespace std;
int main()
{
    int n, i, valid = 1;
    cout << "Enter your num of statements: ";
    cin >> n;
    int a = 5;
    string str, p = "++", m = "--";
    for(i = 0; i < n; i++)
    {
        cin >> str;
        if(str == p)
        {
            a += 10;
        }
        else if(str == m)
        {
            a -= 10;
        }
        else
        {
            cout << "Invalid input" << endl;
            valid = 0;
            break;
        }
    }
    if(valid == 1)
        cout << a << endl;
    return 0;
}
