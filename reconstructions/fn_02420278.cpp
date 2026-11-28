typedef int s32;
typedef float f32;

extern "C" void fn_0241e5c0(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100b046c;
extern "C" s32 data_100b0470;

extern "C" void fn_02420278(void *object) {
    fn_0241e5c0(object);
    fn_037946f0(object, (s32) &data_100b0470, 0, 0, 0, data_100b046c);
}
