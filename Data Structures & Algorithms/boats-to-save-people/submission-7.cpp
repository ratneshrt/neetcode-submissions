class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt = 0, i = 0, j = people.size() - 1;
        sort(people.begin(), people.end());
        while(i<j){
            if(people[i] + people[j] > limit){
                cnt++;
                j--;
            }else{
                cnt++;
                i++;
                j--;
            }
        }

        if(i==j){
            cnt++;
        }

        return cnt;
    }
};