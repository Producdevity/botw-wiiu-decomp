extern "C" void fn_02b1c9b4(void*, void*);
extern "C" void fn_02b1cbe0(int, int, int);

extern "C" int data_10463c60;

extern "C" void fn_0256e5bc(void) {
    if (data_10463c60 != 0) {
        fn_02b1cbe0(data_10463c60, 1, 1);
        fn_02b1cbe0(data_10463c60, 2, 1);
        fn_02b1c9b4((void*)data_10463c60, 0);
    }
}
