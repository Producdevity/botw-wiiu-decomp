typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0311f8b8(void*, int);

extern "C" u8 fn_0313da64(void **arg0) {
    s32 var_r31;
    void *temp_r3;

    temp_r3 = *arg0;
    var_r31 = 0;
    if ((temp_r3 != 0) && (fn_0311f8b8(temp_r3, 0) == 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
