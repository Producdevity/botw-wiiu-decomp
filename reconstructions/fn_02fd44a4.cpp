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

extern "C" void fn_030bb614(void *, unsigned);
extern "C" void fn_03008534(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" int data_10246868;
extern "C" int data_10246878;
extern "C" int data_10246890;

extern "C" void fn_02fd44a4(void *object, int flags) {
    if (object != 0) {
        ((Component *) object)->table_10 = &data_10246868;
        ((Component *) object)->table_a8 = &data_10246878;
        ((Component *) object)->table_a4 = &data_10246890;
        fn_030bb614(((Component *) object)->member, 2U);
        fn_03008534(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
