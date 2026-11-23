typedef unsigned char u8;
typedef int s32;

extern "C" int fn_037e71a0(void*);

extern "C" u8 fn_02ef7ac0(void **arg0) {
    s32 var_r31;
    void *temp_r3;

    temp_r3 = *arg0;
    var_r31 = 1;
    if ((temp_r3 != 0) && (fn_037e71a0(temp_r3) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
