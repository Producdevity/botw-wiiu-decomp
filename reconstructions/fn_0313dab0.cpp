typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0311f8b8(void*, int);

extern "C" u8 fn_0313dab0(void *arg0) {
    s32 var_r31;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (4)));
    var_r31 = 0;
    if ((temp_r3 != 0) && (fn_0311f8b8(temp_r3, 1) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
