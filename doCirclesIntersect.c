int doCirclesIntersect(struct Circle *C1, struct Circle *C2)
{
    int k;
    int r =(C1->r +C2->r)*(C1->r +C2->r);
    int r1 =(C1->r -C2->r)*(C1->r -C2->r);
    int d = ((C1->x - C2->x)*(C1->x - C2->x) + (C1->y - C2->y)*(C1->y - C2->y));
    if((C1->x == C2->x)&&((C1->y == C2->y))){
        return 0;
    }
    if (d==r)
        return 1;
    else if(d < r && d > r1 )
        return 2;
    else
        return 0;
}
/*
Write/define a function with following signature:
int doCirclesIntersect(struct Circle * , struct Circle * )
This function returns 0, if the two circles do not intersect, and it returns value 1 if they intersect at
exactly one point (i.e. they touch each other) and 2 if they intersect at 2 different points.
You are given a structure as following:
struct Circle
{
int x; // x - coordinate of the center of the circle
int y; // y - coordinate of the center of the circle
int r; // r - radius of the circle
}
Input:
Two structure variables of type Circle.
Output:
0, if the two circles don't intersect, 1 if the two circles touch each other, 2 if they intersect at two
different points
Constraints:
−100≤x,y≤100
1≤r≤100
*/
