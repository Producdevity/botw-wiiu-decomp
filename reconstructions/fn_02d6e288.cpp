typedef int s32;

extern "C" int fn_02de33e8(void*, void*);

extern "C" void *data_104640d8;

extern "C" s32 fn_02d6e288(void) {
    struct { s32 f8; } sp;

    if ((void *) data_104640d8 != 0) {
        sp.f8 = 1;
        if (fn_02de33e8(data_104640d8, &sp.f8) == 0) {
            return 1;
        }
    }
    return 0;
}
