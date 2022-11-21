#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
    to know more: https://leetcode.com/problems/valid-palindrome/
                  https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633
*/

bool check_palindrome(string s1, int j)
{
    int s = 0, e = j-1;
    while(s<e)
    {
        if(s1[s] != s1[e])
        {
            return false;
        }
        s++, e--;
    }

    return true;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    int len = s.size();

    //first, make whole string in lowercase.
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    //second, delete all non-character from string
    int j=0;
    for(auto i=0; i<len; i++)
    {
        if(isalnum(s[i]))
        {
            s[j++] = s[i];
        }
    }

    string s1 = s.substr(0,j);

    //third, check if the string is a palindrome or not
    check_palindrome(s1, j) ? (cout<<"true"<<endl) : (cout<<"false"<<endl);


    //output: true
}
