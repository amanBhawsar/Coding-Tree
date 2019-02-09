/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
template <class T>
void sortArray(T arr[], int n)
{
	T temp;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
             if(arr[j]>arr[j+1]){
                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
             }
         }
    }


}
template <class T>
void printArray(T a[], int n)
{
	int i;
	for(i=0;i<n;i++){
	    cout << a[i] << " ";
	}
	cout << endl;
}
