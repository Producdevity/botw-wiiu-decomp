typedef int s32;

extern "C" void fn_0304aca8(void*, void*);
extern "C" void fn_030be630(void*, void*);
extern "C" int fn_03a40780(void);
extern "C" void* data_1046bdd8;

extern "C" s32 fn_0300ba84(void) {
    s32 temp_r3;

    temp_r3 = fn_03a40780();
    if (temp_r3 != 0) {
        fn_030be630((void *) temp_r3, (*(void **)((char *)(data_1046bdd8) + (0x40688))));
        fn_0304aca8(data_1046bdd8, (void *) temp_r3);
    }
    return temp_r3;
}
