void printKMax(int arr[], int n, int k){
    int i;
	deque<int> dq;
    for (i = 0; i < k; i++) {
        while (!dq.empty() && arr[i] > arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for (; i < n; i++) {
        cout << arr[dq.front()] << " ";
        while (!dq.empty() && i - k >= dq.front())
            dq.pop_front();
        while (!dq.empty() && arr[i] > arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout << arr[dq.front()] << "\n";
}
