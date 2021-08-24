class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node *>q;
       Node *temp=root;
       q.push(root);
       while(!q.empty())
       {
           temp->nextRight=NULL;
           int n=q.size();
           for(int i=0;i<n;i++)
           {
               temp=q.front();
               q.pop();
               if(temp->left)q.push(temp->left);
               if(temp->right)q.push(temp->right);
               temp->nextRight=q.front();
           }
       }
       temp->nextRight=NULL;
    }    
      
};

