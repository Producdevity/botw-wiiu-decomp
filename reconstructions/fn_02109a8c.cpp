typedef int s32;
typedef float f32;

extern "C" void fn_0210da9c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10022b98;
extern "C" s32 data_10022b9c;

extern "C" void fn_02109a8c(void *object) {
    fn_0210da9c(object);
    fn_037946f0(object, (s32) &data_10022b9c, 1, 0, 0, data_10022b98);
}
