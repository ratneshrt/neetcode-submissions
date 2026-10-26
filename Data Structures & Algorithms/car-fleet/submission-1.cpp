class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pr;
        for(int i = 0; i<position.size(); i++){
            pr.push_back({position[i], speed[i]});
        }
        sort(pr.rbegin(), pr.rend());
        vector<double> ll;
        for(auto& x: pr){
            ll.push_back((double) (target - x.first)/x.second);
            if(ll.size() >= 2 && ll.back() <= ll[ll.size() - 2]){
                ll.pop_back();
            }
        }
        return ll.size();
    }
};
