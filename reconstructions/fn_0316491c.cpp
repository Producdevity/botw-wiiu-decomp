typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03164730(void*);

extern "C" u8 fn_0316491c(s32 arg0) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;

    temp_r30 = fn_03164730((void *)(arg0 + 0x4A8));
    temp_r3 = fn_03164730((void *)(arg0 + 0x4F4));
    var_r0 = 0;
    if ((temp_r30 != 0) && (temp_r3 != 0)) {
        var_r0 = 1;
    }
    return var_r0;
}
