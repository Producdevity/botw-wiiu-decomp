typedef int s32;
typedef unsigned int u32;

extern "C" unsigned fn_03170940(void *);
extern "C" void* fn_031724b4(void *);

extern "C" s32 fn_031725ec(void *arg0, u32 *arg1) {
    void *temp_r3;

    if (arg1 != 0) {
        temp_r3 = fn_031724b4(arg0);
        if (temp_r3 != 0) {
            *arg1 = fn_03170940(temp_r3);
            return 1;
        }
    }
    return 0;
}
