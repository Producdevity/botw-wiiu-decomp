typedef int s32;

extern "C" void fn_02d4618c(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101e4300;

extern "C" s32 **fn_02d46508(s32 **object) {
    if (object != 0 || (object = (s32 **)fn_0308e578(4U), object != 0)) {
        fn_02d4618c(object);
        *object = &data_101e4300;
    }
    return object;
}
