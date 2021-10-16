#include "headers/compiler.h"
unordered_map<string, pair<string,string>> token;

string stanerr(pair<string, pair<string, string>> P){
    return "Type: " + P.second.first + ", Work: " + P.second.second + " , Value: " + P.first;
}

pair<string, pair<string, string>> iter_through_text(const string & text, const int char_pos){
    auto _char_pos = char_pos;
    if(text.find(' ', char_pos) == string::npos){
        string part_buff = "";
        for (auto _pos = _char_pos; (size_t) _pos < text.length() - (size_t) _char_pos; _pos++ ){ 
            part_buff += text[_pos];
            pair<string, pair<string, string>> ret = make_pair(part_buff, token[part_buff]);
            cout << stanerr(ret) << "\n";
            part_buff = "";
        }
    return make_pair("null", make_pair("null", "null"));
        
    }else{    
        string dummy = ""; 
        for (auto _pos = _char_pos; (size_t) _pos < text.find(' ', char_pos); _pos++ ){
            dummy += text[_pos];
        }
        pair<string, pair<string, string>> ret = make_pair(dummy, token[dummy]);
        return ret;
    }
}


int main(int argc, char* argv[]){

    token["+"] = make_pair("T_OPERATOR", "ADDITION");
    token["-"] = make_pair("T_OPERATOR", "SUBTRACTION");
    token["*"] = make_pair("T_OPERATOR", "MULTIPLICATION");
    token["/"] = make_pair("T_OPERATOR", "DIVISION");

    if(argc == 1) cout << "No args passed\n";
    else{
    auto T =  iter_through_text(argv[1], 0);
    if(T.first == "null") return 0;
    else{
    cout << stanerr(T) << "\n";
    }
    }
}
