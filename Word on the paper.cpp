#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
int main () {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        fastio;

    int n;
    char c;
    cin>>n;

     while (n--) {
    	for (int i =0; i<8*8; i++) {
    	cin>>c;

    	if (c != '.'){
    		cout<<c;
    	}
   }

    cout<<endl;
}


	return 0;
}
