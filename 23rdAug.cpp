class Node {
public:
    unordered_map<char, Node*>mp;
    bool end = false;
};
Node *root, *t1;
string word="";
class StreamChecker {
public:
    StreamChecker(vector<string>& words) {
        word="";
        //First lets build a trie data structure
        Node *trie = new Node();
        root = trie;
        t1 = trie;
        for (auto word : words)
        {
            trie = root;
            reverse(word.begin(),word.end());
            for (char c : word)
            {
                if (trie->mp.find(c) == trie->mp.end())
                {
                    trie->mp[c] = new Node();
                }
                trie = trie->mp[c];
            }
            trie->end = true;
        }

    }
    bool checkans(int x){
        Node *t=root;
        while(x>=0 && t && t->mp.find(word[x])!=t->mp.end())
        {
            t=t->mp[word[x]];
        if(t->end==true)
            return true;
            x--;
       
        }
        return false;
    }

    bool query(char letter) {
        word+=letter;
        return checkans(word.size()-1);

    }
    void printwords(Node *temp, string s) {
        if (temp->end == true)
            cout << s << "\n";
        for (auto it : temp->mp)
            printwords(it.second, (s + it.first));
    }
};
/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
