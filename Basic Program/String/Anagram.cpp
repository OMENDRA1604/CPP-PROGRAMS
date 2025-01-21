#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool Is_Anagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }

    vector<int>freq1(26,0);
    vector<int>freq2(26,0);

    // Stored the frequency of each element of string
    for(int i=0; i<str1.length(); i++)
    {
        int index=str1[i]-'a';
        freq1[index]++;
    }

    for(int i=0; i<str2.length(); i++)
    {
        int index=str2[i]-'a';
        freq2[index]++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<< Is_Anagram(str1,str2)<<endl;

    return 0;
}