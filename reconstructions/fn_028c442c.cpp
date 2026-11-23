typedef float f32;

extern "C" int fn_028c3f04(void*, void*);
extern "C" void fn_028ccd7c(void *, float *);

extern "C" void fn_028c442c(void *arg0, f32 *arg1) {
    if (fn_028c3f04(arg0, arg1) == 0) {
        fn_028ccd7c(arg0, arg1);
    }
}
