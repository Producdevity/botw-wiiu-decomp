typedef int s32;

struct InferredObject;
extern "C" bool fn_03c124c0(const void*);

extern "C" s32 fn_03c2a428(struct InferredObject **arg0) {
    struct InferredObject *temp_r3;

    temp_r3 = *arg0;
    if ((temp_r3 == 0) || (fn_03c124c0(temp_r3) == 0)) {
        return 0;
    }
    return 1;
}
