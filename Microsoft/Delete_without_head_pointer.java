// You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. 
// The task is to delete the node. Pointer/ reference to head node is not given. 
class GfG
{
    void deleteNode(Node node)
    {
         if(node.next!=null){
             node.data = node.next.data;
             node.next = node.next.next;
             
         }
         else{
             node = null;
         }
    }
}