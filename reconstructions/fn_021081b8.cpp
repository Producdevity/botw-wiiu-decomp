typedef int s32;
typedef float f32;

extern "C" void fn_0210da9c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10022620;
extern "C" s32 data_10022624;

extern "C" void fn_021081b8(void *object) {
    fn_0210da9c(object);
    fn_037946f0(object, (s32) &data_10022624, 1, 0, 0, data_10022620);
}
