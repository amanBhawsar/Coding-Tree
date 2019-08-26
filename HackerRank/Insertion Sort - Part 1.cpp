// Complete the insertionSort1 function below.
void insertionSort1(int n, vector<int> arr) {
    int key,j,swap;
    for(int i=1;i<n;i++){
        swap=0;
        key = arr[i];
        j=i-1;
        while((j>=0) && (arr[j]>key)){
            swap=1;
            arr[j+1]=arr[j];
            j=j-1;
            for (int k = 0; k < n; k++) {
              cout << arr[k] << " ";
            }
            cout << endl;
        }
        arr[j + 1] = key;
        if(swap==1){
            for (int k = 0; k < n; k++) {
              cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}