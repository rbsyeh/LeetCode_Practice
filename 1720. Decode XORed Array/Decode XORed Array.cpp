class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> arr(encoded.size()+1);
        arr[0]=first;
        int i;
        
        for(i=1; i<arr.size(); i++){
            arr[i]=arr[i-1]^encoded[i-1];
        }
        return arr;
    }
};
