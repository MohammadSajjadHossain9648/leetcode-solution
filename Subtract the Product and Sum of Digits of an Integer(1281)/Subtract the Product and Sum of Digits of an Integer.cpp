#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int product=1;
    int sum=0;

    while(n!=0){
        int digit=n%10;
        product*=digit;
        sum+=digit;
        n/=10;
    }

    int answer=product-sum;
    return answer;

    /*
    int n;
    cout<<"enter an integer: ";
    cin>>n;

    int product=1,sum=0,sub;

    while(n!=0){
        product*=(n%10);
        sum+=(n%10);
        n=n/10;
    }
    sub=product-sum;
    cout<<"diffrence is "<<sub<<endl<<endl;
    */

    /* by counting length of int

        int length = floor(log10(n)) + 1;
        int product=1,sum=0,sub;

        while(length>0){
            product*=(n%10);
            sum+=(n%10);
            n=n/10;
            length--;
        }
        sub=product-sum;
        cout<<"diffrence is "<<sub<<endl<<endl;
    */

    //output:
    //    enter an integer: 234
    //    diffrence is 15
}
