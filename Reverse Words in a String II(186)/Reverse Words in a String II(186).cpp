/* problem:
    Given an input string, reverse the string word by word.
    Example:
        Input:
        ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]

        Output:
        ["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]

    Note:
    A word is defined as a sequence of non-space characters.
    The input string does not contain leading or trailing spaces.
    The words are always separated by a single space.
*/
#include<iostream>
#include<sstream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string a = "the sky is blue";
    stack<string> myStack;

    //divide all word from sentence
    stringstream s(a);

    // now push all words in stack
    string words;
    int count = 0;
    while(s >> words)
    {
        myStack.push(words);
        count++;
    }


    //print the reverse sentence
    for(int i=0; i<count; i++)
    {
        cout<<myStack.top()<<" ";
        myStack.pop();
    }
    cout<<endl;

    return 0;

    //output:
    //    blue is sky the
}
