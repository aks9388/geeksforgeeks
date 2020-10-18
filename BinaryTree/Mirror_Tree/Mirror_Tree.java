class Tree
{
    void mirror(Node node)
    {
	   node = mirrorHelper(node);
    }
    Node mirrorHelper(Node node){
        if (node == null) 
            return node; 
  
        Node left = mirrorHelper(node.left); 
        Node right = mirrorHelper(node.right); 
  
        node.left = right; 
        node.right = left; 
  
        return node; 
    }
}