typedef int s32;
typedef float f32;

extern "C" void fn_02b3277c(void*, float);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_10102f88;
extern "C" s32 data_10102f8c;

extern "C" void fn_0265ed34(void **arg0) {
    fn_02b3277c(*arg0, data_10102f88);
    fn_037b8284(arg0, &data_10102f8c, 0);
}
