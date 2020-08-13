class CombinationIterator {
public:
    vector<string> ans;
    int indx=0;
    void combinationUtil(string s,int r,int index, 
                     string data, int i) 
    {   
        if (index == r) { 
            ans.push_back(data); 
            return; 
        } 
        if (i >= s.size()) 
            return;     
        data[index] = s[i]; 
        combinationUtil(s, r, index + 1, data, i + 1); 
        combinationUtil(s, r, index, data, i + 1); 
} 
    CombinationIterator(string characters, int combinationLength) {
        string data=characters.substr(0,combinationLength);
        combinationUtil(characters,combinationLength, 0, data, 0); 
    }
    
    string next() {
        return ans[indx++];
    }
    
    bool hasNext() {
        if(indx==ans.size())
            return false;
        return true;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
