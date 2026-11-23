typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0434c018(void*);

extern "C" void fn_03c24338(u8 *arg0) {
    if ((s32) *arg0 != 0) {
        fn_0434c018(arg0 + 8);
        *arg0 = 0;
    }
}
