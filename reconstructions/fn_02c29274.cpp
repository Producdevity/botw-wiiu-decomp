typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02eb6914(void*);
extern "C" void fn_02ec0238(void*);
extern "C" void* data_10469978;

extern "C" u8 data_10463e6a;

extern "C" void fn_02c29274(void) {
    void *temp_r31;

    temp_r31 = data_10469978;
    if (temp_r31 != 0) {
        if ((s32) data_10463e6a != 0) {
            fn_02ec0238(temp_r31);
        }
        fn_02eb6914(temp_r31);
    }
}
