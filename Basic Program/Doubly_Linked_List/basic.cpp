#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int data)
    {
        value = data;
        next = NULL;
        prev = NULL;
    }
};

int main ()
{
    Node* head=NULL;


    return 0;
}