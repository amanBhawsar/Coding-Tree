
// Complete the runningTime function below.
int runningTime(vector<int> arr) {
    int key, j, s=0;
    for (int i = 1; i < arr.size(); i++) {
            key = arr[i];
            j = i - 1;
            while ((j >= 0) && (arr[j] > key)) {
            s++;
            arr[j + 1] = arr[j];
            j = j - 1;
            }
            arr[j + 1] = key;
    }
    return s;
}
