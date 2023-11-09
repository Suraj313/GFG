
class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int ans=-1;
        int maxIndex = 0;
        for(int column=0;column<N;column++){
            int count_zero=0;
            for(int row=0;row<N;row++){
                if(arr[row][column]==0){
                    count_zero++;
                }
            }
             if(count_zero>maxIndex){
                    maxIndex=count_zero;
                    ans=column;
                }  
        }
        
      return ans;  
    }
};

