typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct Object;
extern "C" void fn_037e58bc(Object *, unsigned);

extern "C" s32 data_1033463c;

extern "C" void fn_038e6d98(struct Object *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x18))) = &data_1033463c;
        fn_037e58bc(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
