typedef unsigned char u8;
typedef int s32;

extern "C" void fn_038a42c4(void*, int);
extern "C" void fn_038b12d0(void*, int);

extern "C" void fn_03404734(void *arg0, u8 *arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1E4)));
    if (temp_r3 != 0) {
        fn_038a42c4(temp_r3, (s32) *arg1);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x8BC)));
    if (temp_r3_2 != 0) {
        fn_038b12d0(temp_r3_2, (s32) *arg1);
    }
}
