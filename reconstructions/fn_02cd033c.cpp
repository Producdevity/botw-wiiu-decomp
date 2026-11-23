typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

extern "C" u8 fn_02cd033c(struct InferredObject **arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_02d82148(*arg0) != 0) && ((s32) (*(u8 *)((char *)(*arg0) + (0x12A9))) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
