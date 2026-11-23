typedef float f32;

extern "C" int fn_02d3369c(void*);
extern "C" void fn_02e1867c(void*, float);
extern "C" void fn_02e1869c(void*, void*);
extern "C" void fn_02e18ec4(void*, float);
extern "C" void fn_02e18ee4(void*, void*);
extern "C" void fn_02e1a1d0(void*, float);
extern "C" void fn_02e1af6c(void*, float);
extern "C" void fn_02e1affc(void*, float);
extern "C" void fn_02e1b01c(void*, void*);

extern "C" void fn_02d648ec(void *arg0) {
    if (fn_02d3369c(arg0) == 0) {
        fn_02e1af6c(0, (*(f32 *)((char *)(arg0) + (0x1844))));
        fn_02e1affc(0, (*(f32 *)((char *)(arg0) + (0x1820))));
        fn_02e18ec4(0, (*(f32 *)((char *)(arg0) + (0x182C))));
        fn_02e1867c(0, (*(f32 *)((char *)(arg0) + (0x1838))));
        fn_02e1b01c((*(void **)((char *)(arg0) + (0x16F4))), 0);
        fn_02e1869c((*(void **)((char *)(arg0) + (0x16F8))), 0);
        fn_02e18ee4((*(void **)((char *)(arg0) + (0x16FC))), 0);
        fn_02e1a1d0(0, (*(f32 *)((char *)(arg0) + (0x1850))));
    }
}
