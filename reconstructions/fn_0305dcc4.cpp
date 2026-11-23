typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_037e5f50(const void*);
extern "C" int fn_037e71a0(void*);

extern "C" u8 fn_0305dcc4(struct InferredObject *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((arg0 != 0) && (fn_037e5f50(arg0) != 0) && (fn_037e71a0(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
