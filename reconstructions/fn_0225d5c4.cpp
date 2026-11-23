typedef int s32;
typedef float f32;

extern "C" void fn_0225d27c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100647cc;
extern "C" s32 data_100647d0;

extern "C" void fn_0225d5c4(void *arg0) {
    fn_0225d27c(arg0);
    fn_037946f0(arg0, (s32) &data_100647d0, 1, 0, 0, data_100647cc);
}
