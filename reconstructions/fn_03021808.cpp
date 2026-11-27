namespace {
struct Component {
    char padding_0[0x10];
    int *table_10;
    char padding_14[0x90];
    int *table_a4;
    int *table_a8;
    char padding_ac[0x1AC0];
    char member[1];
};
}

extern "C" void fn_02e6cc74(void*, int);
extern "C" void fn_03008534(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" int data_102543f0;
extern "C" int data_10254400;
extern "C" int data_10254418;

extern "C" void fn_03021808(void *arg0, int arg1) {
    if (arg0 != 0) {
        ((Component *) arg0)->table_10 = &data_102543f0;
        ((Component *) arg0)->table_a8 = &data_10254400;
        ((Component *) arg0)->table_a4 = &data_10254418;
        fn_02e6cc74(((Component *) arg0)->member, 2);
        fn_03008534(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
