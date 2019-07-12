// Given a struct array of type Height, having two elements feet and inches. 
// Find the maximum height, where height is calculated sum of feet and inches after converting feet into inches.
class GfG
{
    public static int findMax(Height arr[], int n)
    {
       int maxHeight = 0; 
       for(Height height: arr){
           int currHeight = height.feet*12 + height.inches;
           if(currHeight>maxHeight){
               maxHeight = currHeight;
           }
       }
       return maxHeight;
    }
    
}