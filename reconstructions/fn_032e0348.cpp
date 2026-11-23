typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_03485c18(const void *);

extern "C" u8 fn_032e0348(void *arg0) {
    s32 var_r31;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x50)));
    var_r31 = 1;
    if ((temp_r3 != 0) && (fn_03485c18(temp_r3) != 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
