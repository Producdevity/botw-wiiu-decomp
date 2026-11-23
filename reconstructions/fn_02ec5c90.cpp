typedef int s32;

extern "C" void fn_03088a00(void*);
extern "C" void fn_03088a08(void*);
extern "C" void fn_03088a10(int);
extern "C" void fn_03088a18(void*);
extern "C" void fn_03088a30(int);
extern "C" unsigned char data_10549fec[];

extern "C" void fn_02ec5c90(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x18))) != 0xA) {
        fn_03088a00(data_10549fec);
        fn_03088a08(0);
        fn_03088a18(0);
        fn_03088a10(-1);
        fn_03088a30(-1);
    }
}
