typedef unsigned char u8;
typedef int s32;

extern "C" void fn_038a0afc(void*);

extern "C" void fn_038a0bac(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0xC))) == 0) {
        fn_038a0afc(arg0);
    }
    (*(u8 *)((char *)(arg0) + (0xC))) = 0U;
}
