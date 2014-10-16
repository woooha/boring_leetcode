int max(int a, int b){
    return a > b ? a : b;
}
int min(int a, int b){
    return a > b ? b : a;
}
class Solution {
public:
    int maxProduct(int A[], int n) {
/*
        int max_product = A[0];
        for(int low = 0; low < n; low ++ ){
            int product = A[low];
            for(int high = low + 1; high < n; high++ ){
                product *= A[high];
                if( product > max_product ){
                    max_product = product;
                }
            }
        }
        return max_product;
*/
        int max_end = A[0];
        int min_end = A[0];
        int max_result = max_end;
        for( int i = 1; i < n; i++ ){
            int end1 = max_end * A[i], end2 = min_end * A[i];
            max_end = max( max(end1, end2), A[i]);
            min_end = min( min(end1, end2), A[i]);
            if( max_end > max_result ){
                max_result = max_end;
            }
        }
        return max_result;
    }
};
