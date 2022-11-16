#include <bits/stdc++.h>
using namespace std;

int minsubsetsumdiff(int arr[4], int sum, int n){
    bool t[n+1][sum+1];
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < sum+1; j++){
            if(i == 0){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
        }
    }
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < sum+1; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j - arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    int diff = INT_MAX;
    for(int i = 0; i < sum+1/2; i++){
        if(t[n][i] == true){
            diff = min(diff, abs(sum-2*i));
        }
    }
    
    
    return diff;
}

int main() {
	int arr[4] = {1, 6, 11, 5};
	int sum = 0;
	for(int i = 0; i < 4; i++){
	    sum += arr[i]; 
	} 
	int res = minsubsetsumdiff(arr, sum, 4);
	cout << res << endl;
}
