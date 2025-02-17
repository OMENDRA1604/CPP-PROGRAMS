#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
 public:

    int value;
    Node* left;
    Node* right;

    Node(int data){
        value = data;
        left = NULL;
        right = NULL;
    }

};

vector<int> levelOrderTraversal(Node* root){
    vector<int> ans;
    if(!root) return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front)
        {
            ans.push_back(front->value);
            q.push(front->left);
            q.push(front->right);
        }
        /*else{
            ans.push_back(-1);
        }*/
    }
    return ans;
}
int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    vector<int> ans = levelOrderTraversal(root);
    for(int i : ans)
    {
        cout<< i << "->";
    }
    return 0;
}