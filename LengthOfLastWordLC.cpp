class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int c=0;
        int f=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ' && f==0){
                continue;
            }
            
            int a=s[i];
            if(a!=' ') {
                f=1;
                c++;
            }
            else break; 
        }
        return c;
    }
};
