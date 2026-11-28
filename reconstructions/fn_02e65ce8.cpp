typedef int s32;

extern "C" int fn_02e57cac(void);
extern "C" int fn_02e57ce0(void*);
extern "C" int fn_0378dce8(int, void*, void*);

extern "C" void fn_02e65ce8(s32 handle) {
    s32 context;

    if (handle != 0) {
        context = fn_02e57cac();
        if (context != 0) {
            fn_0378dce8(handle, (void *)(fn_02e57ce0((void *) context)), 0);
        }
    }
}
