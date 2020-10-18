class Solution
{
    /* Returns level of given data value */
    
    int getLevel(Node node, int data)  
    { 
        
        int level = getLevelHelper(node, data, 1);
        return level;
        
    } 
    int getLevelHelper(Node node, int data, int level){
        if(node==null){
            return 0;
        }
        if(node.data==data){
            return level;
        }
        int x = getLevelHelper(node.left,data, level+1);
        //to check if the node is in left node
        //without this check the value of level will reset to zero
        if(x!=0){
            return x;
        }
        x = getLevelHelper(node.right,data, level+1);
        return x;
    }
}