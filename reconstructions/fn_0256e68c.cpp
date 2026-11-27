extern "C" void fn_02b1cbe0(int, int, int);

extern "C" int data_10463c60;

extern "C" void fn_0256e68c(void) {
    if (data_10463c60 != 0) {
        fn_02b1cbe0(data_10463c60, 0, 1);
        fn_02b1cbe0(data_10463c60, 1, 1);
    }
}
