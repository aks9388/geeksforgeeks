// Minimum element in BST
class BST
{
    int minValue(Node node)
    {
        if(node==null){
            return -1;
        }
        if(node.left==null){
            return node.data;
        }
        
        return minValue(node.left);
    }
}