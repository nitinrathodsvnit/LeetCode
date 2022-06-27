class WordDictionary {
    struct Node {
        char c;
        bool word_end = false;
        array<Node*, 26> children = {nullptr};
        
        Node(char c): c(c) {};
    };
    
    Node *trie;
public:
    WordDictionary() {
        trie = new Node('#'); 
    }
    
    void addWord(string word) {
        _add(word, trie); 
    }
    
    void _add(string word, Node *t) {
        for (int i=0; i<word.size(); i++) {
            if (t->children[word[i]-'a'] == nullptr) {
                t->children[word[i]-'a'] = new Node(word[i]);
            }
            if (i == word.size()-1) t->children[word[i]-'a']->word_end = true;
            t = t->children[word[i]-'a'];
        }
    }
    
    bool search(string word) {
        return _search(word, trie);
    }
    
    bool _search(string const &word, Node *t, int const i = 0) {
        if (i == word.size()) {
            return t->word_end;
        }
        
        if (word[i] == '.') {
            for (auto child : t->children) {
                if (!child) continue;
                if (_search(word, child, i+1)) return true;
            }
        } else {
            if (t->children[word[i]-'a'] == nullptr) return false;
            else return _search(word, t->children[word[i]-'a'], i+1); 
        }
        
        return false;
    }
};