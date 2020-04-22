/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int minLeft=INT_MAX;
        vector<int> v=binaryMatrix.dimensions();
        int n=v[0],m=v[1];
        for(int i=0;i<n;i++){
            if(binaryMatrix.get(i,m-1)==0)
                continue;
            int st=0,end=m,mid;
            while(st<end){
                mid=st+(end-st)/2;
                if(binaryMatrix.get(i,mid)==1){
                    end=mid;
                }else{
                    st=mid+1;
                }
            }
            minLeft=min(minLeft,st);
        }
        return (minLeft==INT_MAX)?-1:minLeft;
    }
};