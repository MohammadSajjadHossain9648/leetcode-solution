class Solution {
public:
    int reverse(int x) {
        int answer = 0;
        while(x){
            if( (answer>INT_MAX/10) || (answer<INT_MIN/10) ){
                return 0;
            }
            int last_digit = x % 10;
            answer = (answer*10) + last_digit;
            x /= 10;
        }
        return answer;
    }
};

//or can be write

class Solution {
public:
    int reverse(int x) {
        int answer = 0;

        while(x!=0)
        {
            if((answer > INT_MAX / 10) || (answer < INT_MIN / 10))
            {
                return 0;
            }

            int last_digit = x % 10;
            x /= 10;
            answer = (answer * 10) +last_digit;
        }

        return answer;
    }
};

