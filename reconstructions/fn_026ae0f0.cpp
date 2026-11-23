typedef unsigned char u8;
typedef int s32;

extern "C" void fn_025c7b60(void * *);
extern "C" void fn_0317f7bc(void*, void*);

extern "C" void fn_026ae0f0(void **arg0) {
    void *temp_r3;

    fn_025c7b60(arg0);
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x2B8))) != 0) {
        temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x38C)));
        if (temp_r3 != 0) {
            fn_0317f7bc(temp_r3, 0);
        }
    }
}
