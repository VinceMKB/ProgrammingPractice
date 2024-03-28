#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//A man, a plan, a canal, Panama

class palindrome
{
    public:
        string filterString(string &fstr);
        string collectString();
        void isPalindrome(string s);
};

string palindrome::collectString()
{
    string str;

    cout << "Enter String: ";
    getline(cin, str);

    return str;
}


string palindrome::filterString(string &fstr)
{
    string str;

    for(char ch : fstr)
    {
        if(isalnum(ch))
        {
            ch = tolower(ch);
            str += ch;
        }
    }

    return str;
}

void palindrome::isPalindrome(string s)
{
    string forward_str = s;
    string backward_str;

    for(int i = s.length()-1; i>=0; --i)
    {
        backward_str += s[i];
    }

    cout << "This is the string: " << forward_str << endl;
    cout << "This is the reversed string: "<< backward_str << endl;

    if(forward_str == backward_str)
    {
        cout << "The string is a palindrome!";
    }
    else
    {
        cout << "The string is not a palindrome!";
    }

}

int main()
{   
    palindrome objPdrome;
    string collected_Str = objPdrome.collectString();
    cout<< "This is what the user entered: " << collected_Str << endl;
    string filtered_Str = objPdrome.filterString(collected_Str);
    objPdrome.isPalindrome(filtered_Str);

    return 0;
}