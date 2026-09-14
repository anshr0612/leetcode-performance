class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
     int leftx1=rec1[0];
     int lefty1=rec1[1];
     int rightx1=rec1[2];
     int righty1=rec1[3];

     int leftx2=rec2[0];
     int lefty2=rec2[1];
     int rightx2=rec2[2];
     int righty2=rec2[3];

     if(leftx2>=rightx1)return false;
     if(leftx1>=rightx2)return false;
     if(lefty2>=righty1)return false;
     if(lefty1>=righty2)return false;

     return true;
    }
};