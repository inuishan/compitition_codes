class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int row=0,col=0;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<n;i++)
        if(matrix[0][i]==0)
        {
            row=1;
            break;
        }
        for(int i=0;i<m;i++)
        if(matrix[i][0]==0)
        {
            col = 1;
            break;
        }
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                if(matrix[i][j]==0)
                    {
                        matrix[i][0]=0;
                        matrix[0][j]=0;
                        
                    }
        for(int i=1;i<n;i++){
        if(matrix[0][i]==0){
            for(int j=1;j<m;j++)
                matrix[j][i]=0;
        }
        } 
        for(int i=1;i<m;i++){
        if(matrix[i][0]==0){
            for(int j=1;j<n;j++)
                matrix[i][j]=0;
        }
        }
        if(row==0)
        for(int i=0;i<n;i++)
        matrix[0][i]=0;
        if(col==0)
        for(int i=0;i<m;i++)
        matrix[i][0] = 0;
       
    }
};