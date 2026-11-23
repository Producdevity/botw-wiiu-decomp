typedef int s32;

extern "C" void fn_027b8364(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037988ac(void *, void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" s32 data_1012d120;

extern "C" void fn_0278ba5c(void *arg0, s32 arg1) {
    void *temp_r29;

    if (arg0 != 0) {
        temp_r29 = (char *)arg0 + 0x1A8;
        (*(s32 **)((char *)(arg0) + (0xC))) = &data_1012d120;
        fn_037988ac((*(void **)((char *)(arg0) + (0))), temp_r29);
        if (temp_r29 != 0) {
            fn_039883bc((DualInterfaceObject *)((char *)temp_r29 + 0x18), 2U);
        }
        fn_027b8364(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
