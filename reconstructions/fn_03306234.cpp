typedef int s32;
typedef float f32;

extern "C" f32 data_102ad778;
extern "C" f32 data_102ad7b4;

extern "C" f32 fn_03306234(void *arg0) {
    void* const* vt1;
    if (((s32 (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xFC)))[83])() == 0) {
        return data_102ad7b4;
    }
    return data_102ad778;
}
