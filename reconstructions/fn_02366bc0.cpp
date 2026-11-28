typedef int s32;
typedef float f32;

extern "C" void fn_02345624(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10090550;
extern "C" s32 data_10090554;

extern "C" void fn_02366bc0(void *object, void *value) {
    fn_02345624(object, value);
    fn_037946f0(object, (s32) &data_10090554, 0, 0, 0, data_10090550);
}
