#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<string> tokenStack;        
        stack<string> tempStack;
        for( int i = tokens.size() - 1; i >= 0; i-- ){
            tokenStack.push( tokens[i] );
        }
        while( !tokenStack.empty() ){
            if( this->is_operation( tokenStack.top() ) ){
                string operation = tokenStack.top(); tokenStack.pop();
                string right = tempStack.top(); tempStack.pop();
                string left = tempStack.top(); tempStack.pop();
                string result = this->do_operation(left, right, operation);
                tempStack.push( result );
            } else {
                tempStack.push( tokenStack.top() );
                tokenStack.pop();
            }
        }
        return stoi( tempStack.top() );
    }

    string do_operation(string & left, string &right, string &operation ){
        int iLeft = stoi( left );
        int iRight = stoi( right );
        int result;
    
        if( operation == "+" ){
            result = iLeft + iRight;
        } else if( operation == "-" ) {
            result = iLeft - iRight;
        } else if( operation == "*" ) {
            result = iLeft * iRight;
        } else if( operation == "/" ) {
            result = iLeft / iRight;
        }
        return to_string( result );
    }

    bool is_operation( string & s ){
        return s == "+" || s == "-" || s == "*" || s == "/";
    }
};
