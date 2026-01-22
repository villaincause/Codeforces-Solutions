#include<iostream>
#include<string>
using namespace std;
int main(){

int n;
    cin >> n;
    string a;
    cin >> a;
    for(int i = 0; i < n; i++)
    {
        if(a[i]!='a' && a[i]!='o' && a[i]!='e' && a[i]!='u' && a[i]!='i')
        {
            cout << a[i];
        }
        else if(a[i-1]!='a' && a[i-1]!='o' && a[i-1]!='e' && a[i-1]!='u' && a[i-1]!='i')
        {
            cout << a[i];
        }
    }
    return 0;
}
