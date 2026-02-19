// level order traversal using inserting an null node in between 

void levelOrder(Node* root){
    if(root == NULL)return;

    // first create a queue and push rooot and null

    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();

        if(frontNode != NULL){
            cout << frontNode->data << " ";
            if(root->left) q.

        }
        else{

        }
    }
}