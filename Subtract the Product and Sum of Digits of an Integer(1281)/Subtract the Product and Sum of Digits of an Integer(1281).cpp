class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;

        while(n != 0){
            int last_digit = (n % 10);
            n /= 10;
            sum += last_digit;
            product *= last_digit;
        }

        return (product - sum);
    }
};
