#include<iostream>
#include<vector>
#include<string>
using namespace std;

string CountSort(string str)
{
    vector<int>freq(26,0);

    // Stored the frequency of each element of string
    for(int i=0; i<str.length(); i++)
    {
        int index=str[i]-'a';
        freq[index]++;
    }
    int j=0;
    for(int i=0;i<26;i++)
    {
        while(freq[i]--)
        {
            str[j++]=i+'a';
        }   
        
    }
    return str;
}

// We can also subtract string in the same frequency array and check if all the element of frequency 
// array are 0 or not                                                                      
int main()
{
    string str;
    cin>>str;

    cout<< CountSort(str)<<endl;

    return 0;
}