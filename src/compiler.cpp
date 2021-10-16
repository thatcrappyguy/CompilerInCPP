#include "headers/compiler.h"

string stanerr(Tokens T){
    string dum = ""; dum += T.value;
    return "Type: " + T.TYPE + " , Work: " + T.WORK + " , Value: " + dum;
}


void iter_through_text(const string & text){
    for(char c : text){
        if (c == ' ' | c == '\n' | c == '\t') continue;
        else{
        Tokens T;
        T.TYPE = token[c].first;
        T.WORK = token[c].second;
        T.value = c;
        cout << stanerr(T) << "\n";
        }
    }
}


int main(int argc, char* argv[]){

    token['+'] = make_pair("T_OPERATOR", "ADDITION");
    token['-'] = make_pair("T_OPERATOR", "SUBTRACTION");
    token['*'] = make_pair("T_OPERATOR", "MULTIPLICATION");
    token['/'] = make_pair("T_OPERATOR", "DIVISION");
    
    if(argc == 1) cout << "No args passed\n";
    else{
    iter_through_text(argv[1]);
    }
}
