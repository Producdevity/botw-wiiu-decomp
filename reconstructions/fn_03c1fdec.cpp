typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03c1fa08(void*, void*);
extern "C" void fn_03c1fb90(void*);

extern "C" void fn_03c1fdec(void *arg0, void *arg1) {
    (*(void **)((char *)(arg0) + (0x2D4))) = arg1;
    if ((s32) (*(u8 *)((char *)(arg0) + (0x2E6))) != 0) {
        fn_03c1fa08(arg0, arg1);
        fn_03c1fb90(arg0);
    }
}
