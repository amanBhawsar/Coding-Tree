// Complete the rotLeft function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//
int* rotLeft(int n, int* a, int d, int* result_count) {
    int j=0;
    int arr[n];
    for(int i=d;i<n;i++){
        arr[j++]=a[i];
    }
    for(int i=0;i<d;i++){
        arr[j++]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=arr[i];
    }
    *result_count=n;
    return a;
}
