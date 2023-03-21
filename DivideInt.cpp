class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend==INT_MIN)
        {
            if(divisor==(-1))
            return INT_MAX;
        }
        long long k=dividend%divisor;
        long long div= dividend-k;

    int res=div/divisor;
    return res;
}};
