typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" void fn_028b66c0(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x6C), 2U);
        fn_037b7d90(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
