typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0344bafc(void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_026ada28(void *arg0) {
    void *temp_r3;

    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if ((temp_r3 != 0) && ((s32) *(*(u8 **)((char *)(arg0) + (0x2AC))) != 0)) {
        fn_0344bafc(temp_r3);
    }
}
