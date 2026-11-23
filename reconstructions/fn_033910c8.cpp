typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_037e655c(const void*);

extern "C" struct InferredObject *fn_033910c8(s32 arg0) {
    struct InferredObject *temp_r30;
    struct InferredObject *var_r31;

    temp_r30 = (InferredObject *)(arg0 + 0xA0);
    var_r31 = 0;
    if (fn_037e655c(temp_r30) != 0) {
        var_r31 = temp_r30;
    }
    return var_r31;
}
