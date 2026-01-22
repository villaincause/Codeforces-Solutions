#include <iostream>
using namespace std;
int main(){
string str;
int s, test, i, j;
scanf("%d", &test);
for(i = 0; i < test; i++){
    scanf("%d", &s);
    cin >> str;
    for(j = 0; j < s; j++){

        if(str[j] == 'b' || str[j] == 'c' || str[j] == 'd'){
            if(str[j+1] == 'a' || str[j+1] == 'e'){
             if(str[j+3] == 'a' || str[j+3] == 'e'){
                str.insert(j+2, ".");
                s++;
             }
             else if(str[j+2] == 'b' || str[j+2] == 'c' || str[j+2] == 'd'){
                str.insert(j+3, ".");
                s++;
             }
             else{
                str.insert(j+2, ".");
                s++;
             }
            }
        }
    }
    s = str.size();
    if(str[s-1] == '.'){
        str.erase(s-1);
    }
 cout << str << endl;
}
return 0;
}
