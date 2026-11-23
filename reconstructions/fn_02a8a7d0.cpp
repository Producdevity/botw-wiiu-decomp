typedef int s32;

extern "C" int fn_02ebc36c(void*);
extern "C" void* data_10469978;

extern "C" s32 fn_02a8a7d0(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((void *) data_10469978 != 0) {
        var_r0 = fn_02ebc36c(data_10469978);
    }
    return var_r0 > 0;
}
