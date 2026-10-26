class Solution {
public:
    string simplifyPath(string path) {
        vector<string> arr;
        stringstream ss(path);
        string part;
        while(getline(ss, part, '/')){
            if(!part.empty()){
                arr.push_back(part);
            }
        }
        stack<string> ll;
        for(int i =0;i<arr.size();i++){
            if(!ll.empty() && arr[i] == ".."){
                ll.pop();
            }else if(arr[i] == "."){
                continue;
            }else if(arr[i] != ".."){
                ll.push(arr[i]);
            }
        }
        vector<string> res;
        while(!ll.empty()){
            string top = ll.top();
            res.push_back(top);
            ll.pop();
        }
        string sres = "/";
        if(res.size() >= 1){
            for(int i = res.size() - 1; i>=0; i--){
                if(i == 0){
                    sres += res[i];
                }else{
                    sres += res[i] + "/";
                }
            }
        }
        return sres;
    }
};