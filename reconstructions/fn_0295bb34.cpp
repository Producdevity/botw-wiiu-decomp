typedef unsigned char u8;
typedef int s32;

extern "C" void fn_025e7324(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" int fn_0378a374(int, int);
struct StatefulEntry;
extern "C" StatefulEntry* fn_0378af4c(void *);
extern "C" unsigned char data_1016da20[];

extern "C" void fn_0295bb34(void *arg0, s32 arg1) {
    struct StatefulEntry *temp_r3;

    if (arg0 != 0) {
        (*(u8 **)((char *)(arg0) + (0xC))) = data_1016da20;
        temp_r3 = fn_0378af4c((*(void **)((char *)(arg0) + (0))));
        if ((temp_r3 != 0) && ((s32) (*(u8 *)((char *)(temp_r3) + (0x54))) == 2)) {
            fn_0378a374((s32) temp_r3, 0);
        }
        fn_025e7324(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
