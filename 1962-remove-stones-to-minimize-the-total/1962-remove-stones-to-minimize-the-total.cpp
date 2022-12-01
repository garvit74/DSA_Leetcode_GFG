class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>hp;
        for(int i = 0; i < piles.size();i++){
            hp.push(piles[i]);
        }
        int temp = 0;
        int ans = 0;
        while(k>0){
            temp = hp.top();
            // cout << temp << endl;
            hp.pop();
            if(temp%2 == 1){
                ans = (temp/2 + 1);
            }
            else{
                ans = temp/2;
            }
            hp.push(ans);
            k--;
        }
        ans = 0;
        while(!hp.empty()){
            ans += hp.top();
            hp.pop();
        }
        return ans;
    }
};