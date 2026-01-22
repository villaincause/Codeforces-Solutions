#include <iostream>
using namespace std;
int main()
{
    long double n, m, a, fStones = 0, temp, temp2;
    long long check, check2, row, col;
    cin >> n >> m >> a;
    temp = m / a;
    temp2 = n / a;
    check = temp;
    check2 = temp2;
    if(check < temp){
        row = check + 1;
    }
    else{
        row = check;
    }
    if(check2 < temp2){
        col = check2 + 1;
    }
    else{
        col = check2;
    }
    cout << row * col << endl;
    return 0;
}
