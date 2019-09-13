
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
int height(Node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        int lheight = height(node->left);  
        int rheight = height(node->right);  

        if (lheight > rheight)  
            return(lheight + 1);  
        return(rheight + 1);  
    }  
}  

void printGivenLevel(Node* root, int level)  
{  
    if (root == NULL)  
        return;  
    if (level == 1)  
        cout << root->data << " ";  
    else if (level > 1)  
    {  
        printGivenLevel(root->left, level-1);  
        printGivenLevel(root->right, level-1);  
    }  
}  
    void levelOrder(Node * root) {
        int h = height(root);  
        int i;  
        for (i = 1; i <= h; i++)  
            printGivenLevel(root, i); 

    }

