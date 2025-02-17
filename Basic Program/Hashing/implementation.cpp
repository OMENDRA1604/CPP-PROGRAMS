#include <bits/stdc++.h>

using namespace std;

class Hashing {

    vector<list<int>> hashtable;
    int buckets;
public:
    Hashing(int size)
    {
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key)
    {
        return key % buckets ; 
    }
    void addkey (int key)
    {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int> :: iterator searchkey(int key)
    {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin() , hashtable[idx].end() , key);
    }

    void Deletekey(int key)
    {
        int idx = hashvalue(key);
        if(searchkey(key) != hashtable[idx].end())
        {
            hashtable[idx].erase(searchkey(key));
            cout<<key << "is deleted" <<endl ;
        }
        else cout <<key << "is not present"<<endl ;
    }

};


int main()
{
     Hashing(10);
}