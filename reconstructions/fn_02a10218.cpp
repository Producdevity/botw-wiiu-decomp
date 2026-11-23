typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_02a10068(const void*);
extern "C" bool fn_0378da88(void *);

extern "C" u8 fn_02a10218(struct InferredObject *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_0378da88((char *)arg0 + 0x284) != 0) && (fn_02a10068(arg0) == 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
