
char * longestCommonPrefix(char ** strs, int strsSize){
    
    if (strsSize == 0) return "";
    
    int i, j, k=0;
    
    char* ans = strs[0];
    
    for(i=0; i<strlen(ans); i++){
        for(j=1; j<strsSize; j++){
            if(strs[j][i]!=ans[i]){
                ans[k]='\0';
                return ans;
            }
        }
        k++;
    }
     ans[k]='\0';
    
    return ans;

}
