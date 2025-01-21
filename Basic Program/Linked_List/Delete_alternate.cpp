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

class LinkedList
{
public :
    Node* head;

    LinkedList()
    {
        head = NULL;
    }

    void insertATtail(int value)
    {
        Node* new_node = new Node(value);
        if(head == NULL)
        {
            head = new_node;
            return;
        }

        Node* temp=head;

        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void Display()
    {
        Node * temp = head;
        while(temp !=NULL)
        {
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }

};

/*void insertAthead(Node *&head, int value)
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



void Display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << endl;
}*/

void Delete_alternate(Node *&head)
{
    Node *temp = head;
    Node *temp_next;
    while (temp != NULL && temp->next != NULL)
    {
        temp_next = temp->next;
        temp->next = temp->next->next;
        free(temp_next);
        temp = temp->next;
    }
}

void Delete_Duplicates(Node *&head)
{
    Node *temp = head;
    Node *temp_next;
    while (temp != NULL && temp->next != NULL)
    {
        if(temp->value == temp->next->value)
        {
            temp_next = temp->next;
            temp->next = temp->next->next;
            free(temp_next);
        }
        else temp = temp->next;
    }
}

void Print_in_reverse(Node* head)
{
    
    if(head == NULL)
    {
        return;
    }
    Print_in_reverse(head->next);

    cout<<head->value<<"->";

}

int main()
{
    LinkedList ll;

    ll.insertATtail(1);
    ll.insertATtail(1);
    ll.insertATtail(1);
    ll.insertATtail(2);
    ll.insertATtail(2);
    ll.insertATtail(6);

    ll.Display();
    
    //Delete_alternate(ll.head);
    //ll.Display();
    
    //Delete_Duplicates(ll.head);
    //ll.Display();

    Print_in_reverse(ll.head);

    return 0;
}