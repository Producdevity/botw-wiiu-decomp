typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_037d7204(const void*);

extern "C" u8 fn_037ee0e0(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_037d7204((*(struct InferredObject **)((char *)(arg0) + (0xE0)))) == 0) && (fn_037d7204((*(struct InferredObject **)((char *)(arg0) + (0xEC)))) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
