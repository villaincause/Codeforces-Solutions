#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int one, target;
    for(int rows = 1; rows <= 5; rows++)
    {
        for(int column = 1; column <= 5; column++)
        {
            cin >> one;
            if(one == 1)
            {
                target = abs(rows-3)+abs(column-3);
            }
        }

    }
    cout << target;
    return 0;
}
