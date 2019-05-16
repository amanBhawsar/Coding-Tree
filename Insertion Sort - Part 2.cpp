// Complete the insertionSort2 function below.
void insertionSort2(int n, vector<int> arr) {
  int key, j, swap;
  for (int i = 1; i < n; i++) {
    swap = 0;
    key = arr[i];
    j = i - 1;
    while ((j >= 0) && (arr[j] > key)) {
      swap = 1;
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
    for (int k = 0; k < n; k++) {
      cout << arr[k] << " ";
    }
    cout << endl;
  }
}
