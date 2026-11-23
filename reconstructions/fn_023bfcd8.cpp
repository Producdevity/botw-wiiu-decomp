typedef unsigned char u8;
typedef int s32;

extern "C" void fn_023bfae4(void*);
extern "C" void fn_023fec98(void *);
extern "C" void fn_02950904(void*);

extern "C" void fn_023bfcd8(void *arg0) {
    fn_023fec98(arg0);
    if ((s32) (*(u8 *)((char *)(arg0) + (0x30))) == 0) {
        fn_023bfae4(arg0);
    }
    fn_02950904((*(void **)((char *)(arg0) + (0))));
}
