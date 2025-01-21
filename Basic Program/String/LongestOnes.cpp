#include <iostream>
#include <vector>
#include <string>
using namespace std;

int LongestOnes(string str, int k)
{
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_count = 0 ;
    while ( end < str.length())
    {
        if ( str[end] == '0')
        {
            zero_count ++;
            max_count ++;
            end ++ ;
        }
        else 
        {
            max_count ++;
            end ++ ;
        }

        if (zero_count > k && str[start] == '0')
        {
            zero_count --;
            max_count --;
            start ++ ;
        }
        else if (zero_count > k)
        {
            start ++;
            max_count --;
        }
        
    }
        
    return max_count;
}

int main()
{
    string str;
    cout << "Enter Binary String :" << endl;
    cin >> str;

    int k;
    cout << "Enter Max Flips :" << endl;
    cin >> k;

    cout << "Longest string length : " << LongestOnes(str , k)  << endl;
}
