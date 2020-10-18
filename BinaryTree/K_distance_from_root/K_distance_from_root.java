class Tree
{
     ArrayList<Integer> al = new ArrayList<Integer>();
     ArrayList<Integer> Kdistance(Node root, int k)
     {
          if(root==null){
              return null;
          }
          if(k==0){
              al.add(root.data);
              return al;
          }
          Kdistance(root.left, k-1);
          Kdistance(root.right, k-1);
          return al;
     }
}