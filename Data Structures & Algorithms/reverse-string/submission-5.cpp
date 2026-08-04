class Solution {
    public:
        void reverseString(vector<char>& s) {
                vector<char> tmp;
                        int n = s.size();
                                for (int i=n-1;i>=0;i--){
                                            tmp.push_back(s[i]);
                                                    }

                                                            for (int i=0;i<n;i++){
                                                                        s[i] = tmp[i];
                                                                                }

                                                                                        
                                                                                            }
                                                                                            };