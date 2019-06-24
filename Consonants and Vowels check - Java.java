class Geeks{
    
    static void checkString(String s)
    {
        int v=0;
        int c=0;
        char[] arr = s.toCharArray();
        for(int i=0;i<arr.length;i++){
            if(arr[i]=='a' || arr[i]=='e'|| arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
                v++;
            }else if(arr[i]==' '){
                
            }else{
                c++;
            }
        }
        // System.out.print(c+" "+v);
        if(v>c)
        System.out.print("Yes");
        else if(c>v)
        System.out.print("No");
        else
       System.out.print("Same");
        
        System.out.println();
    }
}
