typedef int s32;

extern "C" int fn_0328e9f0(void*);
extern "C" void fn_033a18f0(void*, void*);

extern "C" void fn_0328eb88(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0xB8))) = 0;
    if (fn_0328e9f0(arg0) != 0) {
        fn_033a18f0((char *)arg0 + 0xB8, (char *)arg0 + 0xBC);
    }
}
