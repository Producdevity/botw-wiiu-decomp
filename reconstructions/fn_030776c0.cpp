typedef int s32;

extern "C" void fn_02fd735c(void*, void*);
extern "C" void fn_02fd73c4(void*, void*);
extern "C" bool fn_03070ebc(void);
extern "C" int fn_030770b4(int, void *);

extern "C" s32 fn_030776c0(void *arg0, void *arg1) {
    struct { const void* f8; } sp;

    if (fn_03070ebc() != 0) {
        sp.f8 = 0;
        if (fn_030770b4(4, &sp.f8) != 0) {
            fn_02fd735c((void *)(sp.f8), arg1);
            fn_02fd73c4((void *)(sp.f8), arg0);
            return 1;
        }
    }
    return 0;
}
