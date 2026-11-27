typedef int s32;

extern "C" void fn_02d4618c(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101e42ec;

extern "C" s32 **fn_02d461e0(s32 **object) {
    if (object != 0 || (object = (s32 **)fn_0308e578(4U), object != 0)) {
        fn_02d4618c(object);
        *object = &data_101e42ec;
    }
    return object;
}
