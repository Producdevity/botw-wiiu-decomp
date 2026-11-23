typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02c62258(void*);
struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

extern "C" u8 fn_02c623bc(struct InferredObject **arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_02d82148(*arg0) != 0) && (fn_02c62258(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
