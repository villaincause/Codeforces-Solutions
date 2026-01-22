#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int one = 0, zero = 0, s, i, answer = 0;
        string str, tr;
        cin >> str;
        tr = str;
        s = str.size();
        for(i = 0; i < s; i++){
            if(str[i] == '0'){
                zero++;
            }
            else{
                one++;
            }
        }
        for(i = 0; i < s; i++){
            if(str[i] == '0' && one != 0){
                tr[i] = '1';
                one--;
            }
            else if(str[i] == '1' && zero != 0){
                tr[i] = '0';
                zero--;
            }
            if(str[i] == tr[i]){
                answer = s - i;
                break;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
