typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0355bca0(void*);
extern "C" void fn_0355bd44(void*);

extern "C" void fn_0355bde8(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x60))) != 0) {
        fn_0355bca0(arg0);
        fn_0355bd44(arg0);
    }
}
