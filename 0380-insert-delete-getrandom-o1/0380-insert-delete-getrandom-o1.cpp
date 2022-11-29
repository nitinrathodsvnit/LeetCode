class RandomizedSet {
public:
    int y=0;
    unordered_set<int> st;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(st.find(val)!=st.end())  return 0;
        st.insert(val);
        return 1;
    }
    
    bool remove(int val) {
        if(st.find(val)==st.end())  return 0;
        st.erase(val);
        return 1;
    }
    
    int getRandom() {
        int rand_idx = rand() % st.size();
        auto it = st.begin();
        advance(it,rand_idx);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */