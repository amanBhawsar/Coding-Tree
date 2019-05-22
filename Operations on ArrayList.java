/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for Java
// Helper class to handle functions insert(),
// IncOrder(), Search() and DecOrder()
class Geeks
{
    // Function to insert element into list
    public static void insert(ArrayList<Integer> list, int x)
    {
        list.add(x);
        
    }
    
    // Function to sort list in Increasing order
    public static void IncOrder(ArrayList<Integer> list)
    {
        Collections.sort(list);
    }
    
    // Function to search element in the lise
    // val : element to be searched
    public static void Search(ArrayList<Integer> list, int val)
    {
        
        
        int flag = -1;
        flag = Collections.binarySearch(list,val);
        if(flag<=0){
            System.out.println("-1");
        }else{
            System.out.println(flag-1);
        }
    }
    
    // Function to sort list in decreasing order
    public static void DecOrder(ArrayList<Integer> list)
    {
        Collections.sort(list, Collections.reverseOrder());
    }
}
