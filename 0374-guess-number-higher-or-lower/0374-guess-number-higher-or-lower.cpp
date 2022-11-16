/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int front = 1, end = n;
        
        while (front <= end){
            int mid = ((unsigned int)front+(unsigned int)end)/2;
            if (guess (mid) == -1){
                end = mid - 1;
            }
            
            else if (guess (mid) == 1){
                front = mid + 1;
            }
            
            else {
                return mid;
            }
        }
        return 0;
    }
};