#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<int,vector<int>,greater<int>>minh;
	int n, k;
	cin >> n >> k;
	vector<int>nums(n);
	for(int i = 0; i < n; i++){
	    cin >> nums[i];
	    minh.push(nums[i]);
	    if(minh.size() > k){
	        minh.pop();
	    }
	}
	for(int i = 0; i < k; i++){
	    cout << minh.top() << " ";
	    minh.pop();
	}
}
