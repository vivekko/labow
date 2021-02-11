#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N') return NULL;
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);
    Node* root = newNode(stoi(ip[0]));
    queue<Node*> queue;
    queue.push(root);
    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        Node* currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if (currVal != "N") {
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];
        if (currVal != "N") {
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}
  int post(Node* root){
        if(root == NULL)    return 0;
        int left = post(root->left);
        int right = post(root->right);
        ans += abs(left  - right);
        return left + right + root->data;
    }
    int ans = 0;
    int findTilt(Node* root) {
        post(root);
        return ans;
    }
  
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        cout << findTilt(root) << endl;
    }
    return 0;
}
/*___      ___ ___  ___      ___ _______   ___  __    ________           _________  ________  _______   _______      
|\  \    /  /|\  \|\  \    /  /|\  ___ \ |\  \|\  \ |\   ____\         |\___   ___\   __  \|\  ___ \ |\  ___ \     
\ \  \  /  / | \  \ \  \  /  / | \   __/|\ \  \/  /|\ \  \___|_        \|___ \  \_\ \  \|\  \ \   __/|\ \   __/|    
 \ \  \/  / / \ \  \ \  \/  / / \ \  \_|/_\ \   ___  \ \_____  \            \ \  \ \ \   _  _\ \  \_|/_\ \  \_|/__  
  \ \    / /   \ \  \ \    / /   \ \  \_|\ \ \  \ \  \|____|\  \            \ \  \ \ \  \  \ \  \_|\ \ \  \_|\ \ 
   \ \__/ /     \ \__\ \__/ /     \ \_______\ \__\ \__\____\_\  \            \ \__\ \ \__\ _\ \_______\ \_______\
    \|__|/       \|__|\|__|/       \|_______|\|__| \|__|\_________\            \|__|  \|__|\|__|\|_______|\|_______|
                                                       \|_________|                                                 
                                                                                                                    
*/                                                                                              