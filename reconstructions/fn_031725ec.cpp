typedef int s32;
typedef unsigned int u32;

extern "C" unsigned fn_03170940(void *);
extern "C" void* fn_031724b4(void *);

extern "C" s32 fn_031725ec(void *object, u32 *output) {
    if (output != 0) {
        void *entry = fn_031724b4(object);
        if (entry != 0) {
            *output = fn_03170940(entry);
            return 1;
        }
    }
    return 0;
}
