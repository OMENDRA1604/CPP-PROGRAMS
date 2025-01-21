#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

void insertAthead(Node *&head, int value)//pass by reference bcoz we have to perform changes in linked list
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtlast(Node *&head, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
}

void insertAtposition(Node *&head, int value, int pos)
{
    if (pos == 0)
    {
        insertAthead(head, value);
        return;
    }

    Node *new_node = new Node(value);
    Node *temp = head;
    int i = 0;

    while (i != pos - 1)
    {
        temp = temp->next;
        i++;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtposition(Node* &head , int value , int pos)
{
    Node* temp= head;
    int i=0;
    while(i!=pos)
    {
        temp = temp->next;
        i++;
    }
    temp->value = value;
}

void deleteAtStart(Node* &head )
{
    Node *temp = head ;
    head = head->next;
    free(temp);
}

void display(Node * &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL ;

    Node* new_Node = new Node(4);

    insertAthead(head , 1);
    display(head);
    insertAtlast(head , 2);
    display(head);
    insertAtposition(head , 3 , 1);
    
    display(head);

    return 0;
}