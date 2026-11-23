typedef int s32;

extern "C" int fn_03392524(void);
extern "C" void fn_03414938(void);
extern "C" void fn_034149f8(void);
extern "C" void fn_034e2b88(void*);
extern "C" bool fn_0378f190(const void *, int);
extern "C" void* data_1047c244;

extern "C" void *data_1046ff38;
extern "C" void **data_1047c350;

extern "C" void fn_03414bf8(void) {
    void* const* vt1;
    if ((void *) data_1047c244 != 0) {
        if (fn_03392524() != 0) {
            fn_034149f8();
        }
        if (fn_0378f190(data_1047c244, 0) == 0) {
            if ((void *) data_1046ff38 != 0) {
                fn_034e2b88(data_1046ff38);
            }
            ((s32 (*)(void **))(vt1 = *(void* const**)&(*data_1047c350))[21])(data_1047c350);
        }
        fn_03414938();
    }
}
