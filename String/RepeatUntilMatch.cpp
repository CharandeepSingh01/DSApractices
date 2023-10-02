class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count=0;
        // if(a.find(b) != string:: npos) return -1;
        string s="";
        while(s.size()<b.size()){
            s+=a;
            count++;
        }
        if(s.find(b) != string:: npos) return count;
        s+=a;
        count++;
        if(s.find(b) != string:: npos) return count;
        
        return -1;
    }
};