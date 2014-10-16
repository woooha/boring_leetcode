#include <iostream>
#include "Solution.hpp"
#include <string>

using namespace std;

int main( int argc, char *argv[]) {
    Solution solution;
    string s = "the sky is blue";
    if( argc > 1 ) {
        s = argv[1];
    }
    solution.reverseWords(s); 
    cout << s << endl;
    return 0;
}
