typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);
extern "C" void fn_034fc3a8(void *, unsigned);
struct Object;
extern "C" void fn_037e58bc(Object *, unsigned);

extern "C" s32 data_1031ee28;
extern "C" s32 data_1031ee38;

extern "C" void fn_037e049c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x18))) = &data_1031ee28;
        (*(s32 **)((char *)(arg0) + (0x20))) = &data_1031ee38;
        fn_034fc3a8((char *)arg0 + 0x114, 0U);
        fn_030bb614((char *)arg0 + 0xB8, 2U);
        fn_030bb614((char *)arg0 + 0x7C, 2U);
        fn_030bb614((char *)arg0 + 0x40, 2U);
        fn_037e58bc((struct Object *) arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
