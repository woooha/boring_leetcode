#include <iostream>
#include <vector>
#include <string>

#include "Solution.hpp"

using namespace std;

int main(int argc, char * argv[]){
    if( argc <= 1 ){
        return -1;
    }
    vector<string> vec;
    for( int i = 1; i < argc; i++ ){
        string str(argv[i]);
        vec.push_back( str );
    }
    Solution solution;
    cout << solution.evalRPN(vec) << endl;
    return 0;
}
