typedef int s32;

extern "C" int fn_02d33cbc(void);
extern "C" int fn_02e17544(void*);

extern "C" s32 fn_02d628f4(void) {
    if (fn_02d33cbc() != 0) {
        return 0;
    }
    return fn_02e17544(0);
}
