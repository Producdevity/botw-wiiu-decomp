typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0252e820(void*);
extern "C" void fn_026a528c(void*);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_02b12dbc(void*);

extern "C" void fn_026a5294(void *arg0) {
    fn_0252e820(arg0);
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x74))) != 0) {
        fn_02b12dbc((char *)arg0 + 0x88);
    }
    fn_026a528c(arg0);
    fn_0294f828((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x12C);
}
