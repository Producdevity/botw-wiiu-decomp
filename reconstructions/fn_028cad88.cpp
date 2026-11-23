typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" void fn_028cad88(void *arg0, u32 arg1) {
    if (arg0 != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x1F4), 2U);
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x1D4), 2U);
        if (((char *)arg0 + 0x160) != 0) {
            fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x178), 2U);
        }
        if (((char *)arg0 + 0xEC) != 0) {
            fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x104), 2U);
        }
        fn_037b7d90(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
