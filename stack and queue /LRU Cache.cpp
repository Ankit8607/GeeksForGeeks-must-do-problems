// https://practice.geeksforgeeks.org/problems/lru-cache/1

class LRUCache
{
    private:
        int size;
        unordered_map<int,pair<int,list<int>::iterator>>mp;
        list<int>lst;

    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        size=cap;
        mp.clear();
        lst.clear();
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        if(!mp.count(key)) return -1;
        update(key);
        return mp[key].first;
    }
    
    void update(int key){
        auto it=mp[key].second;
        lst.erase(it);
        lst.push_front(key);
        mp[key].second=lst.begin();
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        if(mp.find(key)==mp.end()){
            if(mp.size()>=size){
                mp.erase(lst.back());
                lst.pop_back();
            }
            lst.push_front(key);
        }
        else update(key);
        mp[key]={value,lst.begin()};
    }
};
