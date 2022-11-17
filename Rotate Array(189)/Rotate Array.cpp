#include<iostream>
#include<vector>
using namespace std;
/*
    link: https://leetcode.com/problems/rotate-array/
*/
void rotate_vector(vector<int>& vec, int k)
{
    vector<int> temp(vec.size());
    for(int i=0; i<vec.size(); i++)
    {
        temp[(i+k) % vec.size()] = vec[i];
    }

    vec = temp;

    /*another way by using array
    int temp;
    for(int i=0; i<k; i++)
    {
        temp = arr[len-1];
        for(int j=len-1; j>0; j--)
        {
            arr[j] = vec[j-1];
        }
        arr[0] = temp;
    }
    return arr;
    */
}
int main()
{
    vector<int> vec= {1,2,3,4,5,6,7};
    int k=3;

    rotate_vector(vec, k);

    cout<<"vec[] = ";
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
