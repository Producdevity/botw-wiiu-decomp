typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0356909c(void*);
extern "C" void fn_03569604(void*);
extern "C" void fn_035696b4(void*);
extern "C" void fn_03569734(void);

extern "C" void fn_035697b4(void *arg0) {
    if (((s32) (*(u8 *)((char *)(arg0) + (0xA95))) != 0) && ((s32) (*(s32 *)((char *)(arg0) + (0xC))) != 0)) {
        fn_0356909c(arg0);
        fn_03569604(arg0);
        fn_035696b4(arg0);
        fn_03569734();
    }
}
