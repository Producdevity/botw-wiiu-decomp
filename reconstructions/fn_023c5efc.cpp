typedef unsigned char u8;
typedef int s32;

extern "C" void fn_023c536c(void*);
extern "C" void fn_023c72d8(void*);
extern "C" bool fn_02b628fc(void);

extern "C" void fn_023c5efc(void *arg0) {
    fn_023c72d8(arg0);
    if ((fn_02b628fc() != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0xDD))) != 0)) {
        fn_023c536c(arg0);
    }
}
