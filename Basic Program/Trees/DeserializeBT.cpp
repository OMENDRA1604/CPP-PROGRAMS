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

Node* deserialize(vector<int>& data) {
    if (data.empty()) return NULL;
    
    Node* root = new Node(data[0]);
    queue<Node*> q;
    q.push(root);
    
    int i = 1;
    while (!q.empty() && i < data.size()) {
        Node* node = q.front();
        q.pop();
        
        if (data[i] != -1) {
            node->left = new Node(data[i]);
            q.push(node->left);
        }
        i++;
        
        if (i < data.size() && data[i] != -1) {
            node->right = new Node(data[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}