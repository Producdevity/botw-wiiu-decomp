typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03af1244(void*);
extern "C" void fn_03af129c(void*, void*, int, void*);

extern "C" void fn_03a0d9c0(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x808))) != 0) {
        fn_03af1244((char *)arg0 + 0xB44);
        fn_03af129c((char *)arg0 + 0xB44, 0, 1, (char *)arg0 + 0x34);
    }
}
