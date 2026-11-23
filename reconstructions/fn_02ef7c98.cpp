typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_037e5f50(const void*);
extern "C" void fn_037e6fbc(int);

extern "C" void fn_02ef7c98(void *arg0) {
    struct InferredObject *temp_r3;

    temp_r3 = (*(struct InferredObject **)((char *)(arg0) + (0)));
    if (temp_r3 != 0) {
        if (fn_037e5f50(temp_r3) != 0) {
            fn_037e6fbc((s32) (*(struct InferredObject **)((char *)(arg0) + (0))));
        }
        (*(s32 *)((char *)(arg0) + (0xC))) = -1;
    }
}
