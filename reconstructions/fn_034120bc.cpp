typedef int s32;

extern "C" int fn_03164a24(void*);
extern "C" int fn_03390c48(int);
extern "C" int fn_03390d34(void*);
extern "C" int fn_035f863c(int);
extern "C" int fn_035f88b4(void*);
extern "C" void * data_1046cd60;

extern "C" s32 data_1046e12c;
extern "C" s32 data_1047b04c;

extern "C" s32 fn_034120bc(void) {
    if ((fn_03390c48(data_1046e12c) == 0) || (fn_03390d34((void *) data_1046e12c) == 0) || (fn_035f863c(data_1047b04c) == 0) || (fn_035f88b4((void *) data_1047b04c) == 0) || (fn_03164a24(data_1046cd60) == 0)) {
        return 1;
    }
    return 0;
}
