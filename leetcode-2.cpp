class Solution {
public:
    int countDigits(int num) {
        //Store initial number
        int x=num;
        //Result to be stored
        int count_digit=0;
        //Iterate till num is not zero
        while(num!=0)
        {
            //Getting num unit place digit each time
            int a=num%10;
            //Dividing num each time by 10 and reducing it to zero
            num=num/10;
            //If unit place number divide the original number we increase our count
            if(a!=0&&x%a==0)
            {
                    count_digit++;
            }
        }
    
        //Return total counted digits
    
        return count_digit;
    }
};