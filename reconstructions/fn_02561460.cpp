typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0255f854(void*, void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03458948(void *);
extern "C" unsigned char data_100e0110[];
extern "C" unsigned char data_100e0250[];

extern "C" void fn_02561460(void *arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0x60)));
        (*(u8 **)((char *)(arg0) + (0xC))) = data_100e0110;
        (*(u8 **)((char *)(arg0) + (0x34))) = data_100e0250;
        if (temp_r3 != 0) {
            fn_03458948(temp_r3);
            (*(void **)((char *)(arg0) + (0x60))) = 0;
        }
        fn_0255f854(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
