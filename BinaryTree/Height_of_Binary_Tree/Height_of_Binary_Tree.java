class Solution {
    int height(Node node) {
        if(node==null){
            return 0;
        }
        int leftHeight = height(node.left);
        int rightHeight = height(node.right);
        if(leftHeight>rightHeight){
            return leftHeight +1;
        }
        return rightHeight+1;
    }
}