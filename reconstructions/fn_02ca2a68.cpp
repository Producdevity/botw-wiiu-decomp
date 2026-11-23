typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

extern "C" u8 fn_02ca2a68(void *arg0) {
    s32 var_r30;

    var_r30 = 1;
    if ((fn_02d82148((*(struct InferredObject **)((char *)(arg0) + (0)))) == 0) && ((s32) (*(u8 *)((char *)(arg0) + (0x54))) == 0)) {
        var_r30 = 0;
    }
    return var_r30;
}
