extern "C" int fn_03ccc6f4(int dividend, int divisor) {
    int remainder = dividend;
    int quotient = 0;
    if (remainder >= divisor) {
        do {
            remainder -= divisor;
            quotient += 1;
        } while (remainder >= divisor);
    }
    return quotient;
}
