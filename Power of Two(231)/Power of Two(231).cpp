class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;

        return (n & (n-1)) == 0 ;
    }
};


//or can be write

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; i<=30; i++){
            int num = pow(2, i);
            if(num == n){
                return true;
            }
        }
        return false;
    }
};
