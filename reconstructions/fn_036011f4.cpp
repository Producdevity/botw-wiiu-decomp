namespace {
struct Component {
    char padding_0[0x10];
    int *table_10;
    char padding_14[0x90];
    int *table_a4;
    int *table_a8;
    char padding_ac[0x120];
    char member[1];
};
}

extern "C" void fn_03600208(void *, unsigned);
extern "C" void fn_03605650(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" int data_102f8340;
extern "C" int data_102f8350;
extern "C" int data_102f8368;

extern "C" void fn_036011f4(void *arg0, int arg1) {
    if (arg0 != 0) {
        ((Component *) arg0)->table_10 = &data_102f8340;
        ((Component *) arg0)->table_a8 = &data_102f8350;
        ((Component *) arg0)->table_a4 = &data_102f8368;
        fn_03600208(((Component *) arg0)->member, 2U);
        fn_03605650(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
