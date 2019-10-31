#include<stdio.h>
#include<stdlib.h>                               //to import standard library
struct node                                      //structure to create the nde of the tree
{
        int data;
        struct node* left;
        struct node* right;
};



//Fucnction to create a new node
struct node* newnode(int data)                   
{
        //allocating the space for the new node
        struct node* node= (struct node*)malloc(sizeof(struct node));  
        node->data= data;
        node-> left= NULL;
        node->right=NULL;
}


//Function to find the post order of the tree
int postorder(struct node* node)                  
{
        if(node == NULL)                
                return 0;
        postorder(node->left);
        postorder(node->right);
        printf(" %d ", node->data);
}


//Function to find the inorder of the tree
int inorder(struct node* node)                     
{
        if(node== NULL)
        {
                return 0;
        }
        inorder(node->left);
        printf(" %d ", node->data);
        inorder(node -> right);
}


//Function to find the preorder of the tree
int  preorder(struct node* node)                    
{
        if(node == NULL)
        {
                return 0;
        }
        printf(" %d ", node->data);
        inorder(node->left);
        inorder(node->right);
}

//Driver code
int main() 
{
        struct node *root =newnode(1);           //Creating Root of type node
        root-> left= newnode(2);           
        root-> right=newnode(3);
        root->left->left= newnode(4);
        root->left->right=newnode(5);
        root->right->left= newnode(6);
        root->right->right= newnode(7);
        printf("Inorder traversal of the given tree: ");
        inorder(root);
        printf("Postorder traversak of the given tree: ");
        postorder(root);
        printf("Preorder traversal of the given Tree: ");
        preorder(root);
        getchar();
        return 0;
}

