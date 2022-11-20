#include<iostream>
#include<string>
using namespace std;
/*
    to know more: https://leetcode.com/problems/reverse-string/
*/
char *reverse_string(char arr[], int len)
{
    int s=0, e=len-1;

    while(s<e)
    {
        swap(arr[s++], arr[e--]);
    }
}

void print(char *arr, int len)
{
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    char arr[6] = {'h','e','l','l','o'};
    int len = sizeof(arr)/sizeof(char);

    reverse_string(arr, len);

    print(arr, len);

}
