#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
 int eval(int a, int b, int c){
 return max(b, min(a, c));
 }
 bool checkOverlap(int r, int cx, int cy, int left, int bottom,
int right, int top){
 double cdx = eval(cx, left, right);
 double cdy = eval(cy, bottom, top);
 double rwid = right - left;
 double rh = top - bottom;
 double dx = cx - cdx;
 double dy = cy - cdy;
 double disSq = (dx * dx) + (dy * dy);
 double sqrRadius = (r * r);
 return (disSq <= sqrRadius);
 }
};
main(){
 Solution ob;
 cout << (ob.checkOverlap(1, 0, 0, 1, -1, 3, 1));
}
