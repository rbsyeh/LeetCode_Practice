class Solution {
public:
    int findComplement(int num) {
        int rightMost;
        int count=0;
        int bit_num;
        bit_num = floor(log2(num))+1 ;

        for(int i=0; i<bit_num; i++)
        {
            rightMost=num%2;
            
            if(rightMost==0)
                count=count+pow(2,i);
            num=num/2;
        }
        return count;
        
    }
};
