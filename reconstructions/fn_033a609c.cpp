typedef float f32;

extern "C" void fn_0314dd84(void*, void*, void*, float);
extern "C" void fn_033a5f20(void*);

extern "C" void fn_033a609c(void *arg0, f32 farg0) {
    if ((void *) (*(void **)((char *)(arg0) + (0x1C))) != 0) {
        (*(f32 *)((char *)(arg0) + (0x18))) = farg0;
        fn_033a5f20(arg0);
        fn_0314dd84((*(void **)((char *)(arg0) + (0x1C))), arg0, (char *)arg0 + 0xC, (*(f32 *)((char *)(arg0) + (0x18))));
    }
}
