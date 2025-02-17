#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,int > mp;

    mp[1] = 1;

    mp.insert({2 , 2});
    
    map<int , int> :: iterator itr = mp.begin();

    for(auto i: mp)
    {
        cout<< "key : " << i.first << " and value : " << i.second << endl ;
    }

    return 0;
}