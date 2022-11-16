#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    int answer=0;
    while(num!=0)
    {
        if( (answer>INT_MAX/10) || (answer<INT_MIN/10) ) // cause we use (answer*10)
        {
            return 0;
        }
        int last_digit = num%10;
        answer = (answer*10) + last_digit;
        num /= 10;
    }
    cout<<"reverse integer is "<<answer<<endl;


    /*
        how it works?
        we know, Value of INT_MAX is 2147483647 and Value of INT_MIN is -2147483648. we check this.
        step 1: result/ Input integer length is less than 10 cause length of INT_MAX or INT_MIN is 10.
        step 2: for positive, result/ Input integer value is always less than INT_MAX which is 2147483647
        step 3: for negative, result/ Input integer value is always greater than INT_MIN which is -2147483648

        hints: always length is less than 10 and result never more than INT_MAX or less than INT_MIN.
    */

    /*
        what is INT_MAX & INT_MIN?
        Most of the time, in competitive programming, there is a need to assign the variable,the maximum or
        minimum value that data type can hold, but remembering such a large and precise number
        comes out to be a difficult job. Therefore, C++ has certain macros to represent these numbers,
        so that these can be directly assigned to the variable without actually typing the whole number.

        INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit.
        INT_MIN specifies that an integer variable cannot store any value below this limit.
    */
}
