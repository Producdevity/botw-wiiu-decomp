typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern "C" unsigned char fn_03a81fc4(int);
extern "C" unsigned char fn_03a81fec(int);

extern "C" u8 fn_03a7fb8c(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_03a81fc4((s32) (*(u16 *)((char *)(arg0) + (0x98)))) != 0) && (fn_03a81fec((s32) (*(u16 *)((char *)(arg0) + (0x98)))) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
