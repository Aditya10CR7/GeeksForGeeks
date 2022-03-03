class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        vector<pair<int,int>> moves{{0 , 1} , {1, 0} , {0,-1} , {-1, 0}} ;
        int n = matrix.size() , m = matrix.back().size() ; 
        int i = 0 , j = 0 , curr = 0; 
        while(true){
            if(matrix[i][j] == 1){
                curr = (++curr % 4);
                matrix[i][j] = 0 ;
            }
            i += moves[curr].first;
            j += moves[curr].second;
            if(i == n || i < 0 || j == m || j < 0){
                return {i - moves[curr].first , j - moves[curr].second};
            }
        }
    }

};