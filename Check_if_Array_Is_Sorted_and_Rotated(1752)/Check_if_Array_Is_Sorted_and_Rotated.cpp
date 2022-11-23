#include<iostream>
using namespace std;
/*
    to know more: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
*/
bool sorted_rotate(int *arr, int len)
{
    int count = 0;

    for(int i=0; i<len-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            count++;
        }
    }

    if(arr[len-1] > arr[0])
    {
        count++;
    }

    return count<=1;

    /* can write above line return count<=1;
    if(count <= 1)
    {
        return true;
    }

    return false;
    */
}

int main()
{
    int arr[] = {4,5,1,2,3};
    int len = sizeof(arr)/sizeof(int);

    bool result = sorted_rotate(arr, len);

    if(result)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
