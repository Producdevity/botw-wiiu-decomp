typedef int s32;

extern "C" void fn_02fd735c(void*, void*);
extern "C" void fn_02fd73c4(void*, void*);
extern "C" bool fn_03070ebc(void);
extern "C" int fn_030770b4(int, void *);

extern "C" s32 fn_030776c0(void *first, void *second) {
    const void *found;

    if (fn_03070ebc() != 0) {
        found = 0;
        if (fn_030770b4(4, &found) != 0) {
            fn_02fd735c((void *)found, second);
            fn_02fd73c4((void *)found, first);
            return 1;
        }
    }
    return 0;
}
