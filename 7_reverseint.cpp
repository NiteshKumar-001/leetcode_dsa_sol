class Solution {
public:
    int reverse(int x) {
        int n=x;
        long long reversenos=0;

        while(n!=0){
            int ld=n%10;
            reversenos=(reversenos*10) + ld;
            n=n/10;
        }
        if (reversenos > INT_MAX || reversenos < INT_MIN)
        return 0; 

        return (int) reversenos;
    }
};