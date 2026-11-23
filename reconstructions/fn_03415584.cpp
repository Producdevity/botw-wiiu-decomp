typedef int s32;

extern "C" int fn_03414668(void);
extern "C" void fn_03858080(void*);
extern "C" void fn_03870a50(void*);

extern "C" s32 data_1046f550;
extern "C" void *data_1047c728;
extern "C" void *data_1047c7dc;

extern "C" void fn_03415584(void) {
    if (((s32) data_1046f550 == 0) && (fn_03414668() != 0)) {
        if ((void *) data_1047c728 != 0) {
            fn_03858080(data_1047c728);
        }
        if ((void *) data_1047c7dc != 0) {
            fn_03870a50(data_1047c7dc);
        }
    }
}
