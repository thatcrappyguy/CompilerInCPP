#include<bits/stdc++.h>
using namespace std;
unordered_map<char, pair<string,string>> token;


class Tokens{
    public:
        string TYPE;
        string WORK;
        char value;
 };

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


int main(){

    token['+'] = make_pair("T_OPERATOR", "ADDITION");
    token['-'] = make_pair("T_OPERATOR", "SUBTRACTION");
    token['*'] = make_pair("T_OPERATOR", "MULTIPLICATION");
    token['/'] = make_pair("T_OPERATOR", "DIVISION");
    string dummy = "+-*/+*/*";

    iter_through_text(dummy);

}
