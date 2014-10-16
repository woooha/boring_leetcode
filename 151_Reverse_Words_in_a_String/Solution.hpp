#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
        stack<string> word_stack;
        int last_space_pos = 0;
        int space_pos = -1;
        while( ( space_pos = s.find_first_of(' ', space_pos + 1 ) ) != -1 ){
            if( space_pos - last_space_pos <  1 ){
                last_space_pos ++;
                continue;
            }
            word_stack.push( s.substr(last_space_pos, space_pos - last_space_pos) );
            last_space_pos = space_pos + 1;
        }
        if( last_space_pos != s.size() ){
            word_stack.push( s.substr(last_space_pos , s.size() - last_space_pos ) );
        }
        while( !word_stack.empty() ) {
           s.append( word_stack.top() ).append(" ");
           word_stack.pop();
        }
        if( last_space_pos != 0 ){
            s.pop_back();
        }
    }
};
