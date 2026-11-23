typedef unsigned char u8;
typedef int s32;

struct SignedStateBytes;
extern "C" bool fn_03a3e4dc(const SignedStateBytes *);

extern "C" u8 fn_036066a4(struct SignedStateBytes *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) (*(u8 *)((char *)(arg0) + (0x180))) != 0) && (fn_03a3e4dc(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
