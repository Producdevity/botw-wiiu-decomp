typedef int s32;
typedef float f32;

extern "C" int fn_02b3307c(void*);
extern "C" void fn_0379241c(void*, float);

extern "C" f32 data_101ace18;

extern "C" void fn_02b33194(s32 *arg0) {
    if (fn_02b3307c(arg0) != 0) {
        fn_0379241c((char *)arg0 + 8, data_101ace18);
        if ((s32) *arg0 == 0) {
            *arg0 = 2;
        }
    }
}
