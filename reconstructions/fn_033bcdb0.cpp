typedef int s32;

extern "C" int fn_033bccd8(void*, void*);
extern "C" void fn_033bcd9c(void*, void*);

extern "C" s32 fn_033bcdb0(void *arg0, void *arg1) {
    void* const* vt1;
    s32 temp_r3;

    temp_r3 = fn_033bccd8(arg0, arg1);
    if (temp_r3 != 0) {
        ((s32 (*)())(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[349])();
        fn_033bcd9c(arg0, arg1);
    }
    return 1;
}
