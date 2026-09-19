class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int col=matrix[0].size();
    int l=0;
    int r=row*col-1;
    
        while(l<=r)
       {
        int mid=(l+r)/2;
       int row1=mid/col;
        int col1=mid%col;
        if(matrix[row1][col1]==target)
        return true;

        if(matrix[row1][col1]<target)
        l=mid+1;
        else
        {
            r=mid-1;
        }
       }    
       return false;
    
    
    }
};
