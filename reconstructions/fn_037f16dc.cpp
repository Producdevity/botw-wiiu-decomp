extern "C" int data_1046c8f4;
extern "C" unsigned char data_1047c3cc;
extern "C" void fn_030b80f0(int, int);
extern "C" int fn_037fbcf8();
extern "C" int fn_037fbff0();

extern "C" void fn_037f16dc(int unused, int value) {
    if (fn_037fbcf8() != 0) {
        fn_037fbff0();
    }
    fn_030b80f0(data_1046c8f4, value);
    if ((int) data_1047c3cc != 0) {
        fn_037fbff0();
    }
    if (fn_037fbcf8() != 0) {
        fn_037fbff0();
    }
}
