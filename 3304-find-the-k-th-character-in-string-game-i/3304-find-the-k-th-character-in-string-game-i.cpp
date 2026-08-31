class Solution {
public:
    static char kthCharacter(int B) {
        if (B==1)
         return 'a';
        int shift=0;
        for(int b=bit_ceil((unsigned)B); b>1; b>>=1) {
            if (B>b/2){
                B-=b/2;
                shift++;
            }
        }
        return 'a'+(shift%26);
    }
};
