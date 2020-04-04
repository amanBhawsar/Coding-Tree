class Solution {
public:
    bool checkOverlap(long long int radius, long long int x_center, long long int y_center, int x1, int y1, int x2, int y2) {
        for(long long int i=x1;i<=x2;i++){
            for(long long int j=y1;j<=y2;j++){
                long long int z = (i-x_center)*(i-x_center)+(j-y_center)*(j-y_center)-radius*radius;
                if(z<=0)
                    return true;
            }
        }
        return false;
    }
};