class Solution {
public:
    string longestPalindrome(string s) {

        bool arr[s.length()][s.length()];
        
        int i, j;
        string ans;
        int max=0;
        
        for(i=0; i<s.length(); i++){
            for(j=0; j<s.length()-i; j++){
                if(i==0){
                    arr[j][j]=true;
                    max=1;
                    ans.assign(s, j, 1);
                }
                else if(i==1){
                    if(s.at(j)==s.at(j+1)){
                        arr[j][i+j]=true;
                        max=2;
                    }
                    else{
                        arr[j][i+j]=false;
                    }
                } 
                else if( arr[j+1][i+j-1] && 
                         s.at(j)==s.at(i+j) ){
                    
                    arr[j][i+j]=true;
                    max=i+1;
                   
                }
                else{
                    arr[j][i+j]=false;
                }        
            }   
        } 
        
        for(i=0; i<s.length()-max+1; i++){
            
            if(arr[i][max+i-1]){
                ans.assign(s, i, max);
                return ans;
            }
        } 
        return ans;
    }
};
