typedef unsigned char u8;
typedef int s32;

extern "C" void fn_034c44a4(void*, int);

extern "C" void fn_029d97a8(void *arg0) {
    void *temp_r31;

    if ((s32) *(*(u8 **)((char *)(arg0) + (0x18))) != 0) {
        temp_r31 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x3A0)));
        if (temp_r31 != 0) {
            fn_034c44a4(temp_r31, (*(s32 *)((char *)(temp_r31) + (0xD0))));
            fn_034c44a4(temp_r31, (*(s32 *)((char *)(temp_r31) + (0xD4))));
        }
    }
}
