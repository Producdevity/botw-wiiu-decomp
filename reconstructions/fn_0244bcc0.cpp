typedef int s32;
typedef float f32;

extern "C" void fn_022f89fc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100b8678;
extern "C" s32 data_100b867c;

extern "C" void fn_0244bcc0(void *arg0, void *arg1) {
    fn_022f89fc(arg0, arg1);
    fn_037946f0(arg0, (s32) &data_100b867c, 1, 0, 0, data_100b8678);
}
