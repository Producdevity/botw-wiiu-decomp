typedef int s32;

struct InferredObject;
extern "C" bool fn_03c124c0(const void*);

extern "C" s32 fn_03c19088(void *arg0) {
    struct InferredObject *temp_r3;

    temp_r3 = (*(struct InferredObject **)((char *)(arg0) + (4)));
    if ((temp_r3 == 0) || (fn_03c124c0(temp_r3) == 0)) {
        return 0;
    }
    return 1;
}
