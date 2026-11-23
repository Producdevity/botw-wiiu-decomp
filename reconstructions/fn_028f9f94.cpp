typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0317f700(void*, int);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1015e498;

extern "C" void fn_028f9f94(void *arg0) {
    void *temp_r3;

    if ((s32) (*(u8 *)((char *)(arg0) + (0x71))) != 0) {
        temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x38C)));
        if (temp_r3 != 0) {
            fn_0317f700(temp_r3, 0);
        }
    }
    fn_037b8284(arg0, &data_1015e498, 0);
}
