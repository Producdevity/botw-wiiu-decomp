typedef int s32;
typedef float f32;

extern "C" void fn_02190bbc(void*);
extern "C" void fn_03261774(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_1003afd0;
extern "C" s32 data_1003afd4;

extern "C" void fn_02190c8c(void *object) {
    fn_03261774(object);
    fn_037946f0(object, (s32) &data_1003afd4, 0, 0, 0, data_1003afd0);
    fn_02190bbc(object);
}
