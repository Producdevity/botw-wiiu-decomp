typedef unsigned char u8;
typedef int s32;

extern "C" void fn_020e4fa0(void*);
extern "C" void fn_020e50bc(void*);

extern "C" void fn_020e5140(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0xF1))) == 0) {
        fn_020e4fa0(arg0);
    }
    fn_020e50bc(arg0);
}
