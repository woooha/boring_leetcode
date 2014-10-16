#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution *solution = new Solution();
    int A[] = {0, 2,3, -2, 4};
    int n = 5;
    cout << solution->maxProduct(A, n) << endl;
    return 0;
}
