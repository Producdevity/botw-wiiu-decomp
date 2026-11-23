typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern "C" void fn_03581858(void*);

extern "C" void fn_03581900(void *arg0) {
    u16 temp_r12;

    if ((s32) (*(u8 *)((char *)(arg0) + (0x40))) != 0) {
        fn_03581858(arg0);
        temp_r12 = (*(u16 *)((char *)(arg0) + (0x281A)));
        if ((s32) temp_r12 != 0) {
            (*(u16 *)((char *)(arg0) + (0x281A))) = (u16) (temp_r12 - 1);
        }
    }
}
