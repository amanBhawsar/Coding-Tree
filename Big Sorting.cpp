bool cmp(string i, string j) {
  int n = i.length();
  int m = j.length();
  if (n == m)   //for same length
    return (i < j);
  return n < m; //for different length
}
// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(),unsorted.end(),cmp);
    return unsorted;
}
