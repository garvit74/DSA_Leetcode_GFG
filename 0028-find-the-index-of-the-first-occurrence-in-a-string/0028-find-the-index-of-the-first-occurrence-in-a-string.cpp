class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int ans=-1;
        int i=0;
        while(i< haystack.length() )
        {
          if(haystack[i] != needle[0])
            i++;
          else
          {
            int r=i;
            //Using substr function to get the string 

            string a=haystack.substr(i,n);
            if(a==needle)
            {
              ans=i;
              break;
            }
            else{
              i=r+1;
            }
          }
        }
        return ans;
        
    }
};