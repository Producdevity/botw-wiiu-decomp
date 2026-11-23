typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02f03a14(void*);

extern "C" u8 fn_02f5d7dc(void *arg0) {
    s32 var_r31;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1B68)));
    var_r31 = 0;
    if ((temp_r3 != 0) && (fn_02f03a14(temp_r3) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
