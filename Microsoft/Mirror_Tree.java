//Given a Binary Tree, convert it into its mirror.

/*class Node
{
    int data;
    Node left, right;
   Node(int item)    
   {
        data = item;
        left = right = null;
    }
} */
class Tree
{
    void mirror(Node node)
    {
	    if(node==null){
	        return;
	    }
	    mirror(node.left);
	    mirror(node.right);
	    Node temp = node.left;
	    node.left = node.right;
	    node.right = temp;
    }
}