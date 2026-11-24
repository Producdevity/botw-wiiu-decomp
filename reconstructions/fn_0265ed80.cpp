typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" bool fn_0378dacc(void*, void*);

extern "C" f32 data_10102f9c;

extern "C" u8 fn_0265ed80(void *arg0, void *arg1) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_0378dacc((char *)arg0 + 0xA8, arg1) != 0) && ((*(f32 *)((char *)(arg0) + (0x9C))) > data_10102f9c)) {
        var_r31 = 1;
    }
    return var_r31;
}
