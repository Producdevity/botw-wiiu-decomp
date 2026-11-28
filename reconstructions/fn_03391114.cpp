typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_037e655c(const void*);

extern "C" struct InferredObject *fn_03391114(s32 base) {
    struct InferredObject *member;
    struct InferredObject *result;

    member = (InferredObject *)(base + 0x130);
    result = 0;
    if (fn_037e655c(member) != 0) {
        result = member;
    }
    return result;
}
