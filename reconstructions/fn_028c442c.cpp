typedef float f32;

extern "C" int fn_028c3f04(void*, void*);
extern "C" void fn_028ccd7c(void *, float *);

extern "C" void fn_028c442c(void *object, f32 *other) {
    if (fn_028c3f04(object, other) == 0) {
        fn_028ccd7c(object, other);
    }
}
