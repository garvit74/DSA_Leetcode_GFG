#include <bits/stdc++.h>
using namespace std;

void hardsolve(){
    int W, X, Y, Z;
    cin >> W >> X >> Y >> Z;
    int ans = W + (X - Y)*Z;
    cout << ans << endl;
}

int main() {
	int tasks;
	cin >> tasks;
	while(tasks--){
	    hardsolve();
	}
}
