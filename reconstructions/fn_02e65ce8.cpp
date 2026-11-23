typedef int s32;

extern "C" int fn_02e57cac(void);
extern "C" int fn_02e57ce0(void*);
extern "C" int fn_0378dce8(int, void*, void*);

extern "C" void fn_02e65ce8(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        temp_r3 = fn_02e57cac();
        if (temp_r3 != 0) {
            fn_0378dce8(arg0, (void *)(fn_02e57ce0((void *) temp_r3)), 0);
        }
    }
}
