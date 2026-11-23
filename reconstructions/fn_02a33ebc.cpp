typedef unsigned char u8;
typedef int s32;

struct HandleSlot;
struct HandleTarget;
extern "C" bool fn_0378da58(const HandleSlot *, const HandleTarget *);

extern "C" u8 fn_02a33ebc(s32 arg0, struct HandleTarget *arg1) {
    s32 var_r31;

    var_r31 = 0;
    if ((arg1 != 0) && (fn_0378da58((const HandleSlot *)(arg0 + 0x14), arg1) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
