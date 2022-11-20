#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    cout<<"enter an integer: ";
    cin>>num;

    for(int i=0; i<=30; i++){ //-> brute force solution
        int x = pow(2,i);
        if(x == num){
            cout<<"true"<<endl;
            return 0;
        }
    }

    cout<<"false"<<endl<<endl;

//most efficient way
    if(num <= 0){
        cout<<"false"<<endl;
    }
    (num&(num-1) == 0)? cout<<"true"<<endl:cout<<"false"<<endl;


    /*
        how it work in most efficient way?
        only num is power of two if ( num & (num-1)) = 0

        let num = 4;

            0000....1000 -> 4
        &   0000....0111 -> 3
            ------------
            0000....0000 -> 0

        another num = 5;

            0000....1001 -> 5
        &   0000....1000 -> 4
            ------------
            0000....1000 -> 4
    */
}
