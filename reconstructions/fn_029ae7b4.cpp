typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" void fn_029ae7b4(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x24), 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
