#include <bits/stdc++.h>
using namespace std;

bool dYear (int z){
string s = to_string(z);
set<char> st(s.begin(), s.end());
return st.size() == s.size();
}

int main()
{
int y;
cin >> y;
for(int x = y + 1; ; x++){
    if(dYear(x)){
        cout << x;
        break;
    }
}
return 0;
}

