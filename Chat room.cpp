#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char s[100];
char temp[6] = "hello";
cin >> s;
int length = strlen(s), j = 0, x = 0;
for(int i = 0; i < length; i++){
    if(s[i] == temp[j]){
    x++;
    j++;
    }
}
if(x == 5){
cout << "YES";
}
else{
cout << "NO";
}
return 0;
}
