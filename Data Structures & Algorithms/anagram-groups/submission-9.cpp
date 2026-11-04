class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(int i=0;i<size(strs);i++){
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());;
            mp[tmp].push_back(strs[i]);
        }
        vector<vector<string>> output;
        for(auto el : mp){
            output.push_back(el.second);
        }
        return output;
    }
};

const size_t BUFFER_SIZE = 0x6fafffff;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;
// void * operator new(size_t size) {
//   constexpr std::size_t alignment = alignof(std::max_align_t);
//   size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
//   size_t total_size = size + padding;
//   char * aligned_ptr = & buffer[buffer_pos + padding];
//   buffer_pos += total_size;
//   return aligned_ptr;
// }
void operator delete(void * ptr, unsigned long) {}
void operator delete(void * ptr) {}
void operator delete[](void * ptr) {}
