class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for(char c : s)
        {
            if(c==letter)count++;
        }
        double ans =((count*1.0)/(s.size()*1.0));
        return (int)(ans*100);
    }
};