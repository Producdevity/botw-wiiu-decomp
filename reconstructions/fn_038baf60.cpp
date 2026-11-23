typedef int s32;
typedef float f32;

extern "C" void fn_033e2f30(void*, void*);
extern "C" const float data_10331a10;

extern "C" void fn_038baf60(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0xBC)));
    if (temp_r4 != 0) {
        fn_033e2f30((void *)((*(s32 *)((char *)(arg0) + (0x40))) + 0x448), temp_r4);
        (*(void **)((char *)(arg0) + (0xBC))) = 0;
    }
    (*(f32 *)((char *)(arg0) + (0xC0))) = (f32) data_10331a10;
}
