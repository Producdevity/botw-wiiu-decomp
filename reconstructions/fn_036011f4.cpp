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

extern "C" void fn_036011f4(void *storage, int flags) {
    if (storage != 0) {
        ((Component *)storage)->table_10 = &data_102f8340;
        ((Component *)storage)->table_a8 = &data_102f8350;
        ((Component *)storage)->table_a4 = &data_102f8368;
        fn_03600208(((Component *)storage)->member, 2U);
        fn_03605650(storage, 0U);
        if (flags & 1) {
            fn_0308e6d0(storage);
        }
    }
}
