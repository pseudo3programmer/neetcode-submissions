class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int counter = 0;
        if(s.size()==t.size()){
            for(int i = 0;i<s.size();i++){
                if(s[i]==t[i]){
                    counter++;
                }
                else{continue;}
            }
            
        }
        if(counter == s.size()){
            return true;
        }
        return false;
    }
};
