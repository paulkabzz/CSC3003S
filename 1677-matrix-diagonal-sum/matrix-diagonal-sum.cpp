class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary_diagonal = 0;
        int secondary_diagonal = mat.size() - 1;
        int sum = 0;

        while (primary_diagonal < mat.size() && secondary_diagonal >= 0) {
            sum += mat[primary_diagonal][primary_diagonal] + mat[primary_diagonal][secondary_diagonal];
            primary_diagonal++;
            secondary_diagonal--;
        }

        return mat.size() % 2 == 0 ? sum : sum - mat[mat.size()/2][mat.size()/2];
    }
};