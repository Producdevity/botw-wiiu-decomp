extern "C" int fn_03ccc6f4(int arg0, int arg1) {
    int remainder = arg0;
    int quotient = 0;
    if (remainder >= arg1) {
        do {
            remainder -= arg1;
            quotient += 1;
        } while (remainder >= arg1);
    }
    return quotient;
}
