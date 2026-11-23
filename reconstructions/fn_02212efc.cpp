typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02212ea4(void*, void*);
extern "C" void fn_0221d9f4(char *);

extern "C" void fn_02212efc(s8 *arg0) {
    fn_0221d9f4((char *)(arg0));
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x1C))) == 0) {
        fn_02212ea4(arg0, 0);
    }
}
