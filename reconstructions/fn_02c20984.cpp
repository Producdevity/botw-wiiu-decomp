typedef int s32;

extern "C" int fn_035ff100(void*);
extern "C" void* data_1047b054;

extern "C" s32 fn_02c20984(void) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_035ff100(data_1047b054) == 0) {
        var_r31 = 1;
    }
    return var_r31;
}
