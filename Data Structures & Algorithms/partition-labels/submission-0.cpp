class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map<char,int> lastIndex;
        for(int i=0;i<n;i++){
            lastIndex[s[i]]=i;
        }

        vector<int> ans;
        int i=0;
        while(i<n){
            int count=0;
            int index=lastIndex[s[i]];
            int k=i;
            while(i<=index){
                if(lastIndex[s[i]]>index){
                    index=lastIndex[s[i]];
                }
                count++;
                i++;
            }
            ans.push_back(count);
        }
        return ans;

    }
};
