#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;
        }
        if(!copies.count(node)){
            copies[node] = new Node(node->val, {});
            for(auto neighbor : node -> neighbors){
                copies[node] -> neighbors.push_back(cloneGraph(neighbor));
            }
        }
        return copies[node];
    }
private:
    unordered_map<Node*, Node*> copies;
};
