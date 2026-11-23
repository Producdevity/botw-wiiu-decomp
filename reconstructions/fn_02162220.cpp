typedef unsigned char u8;
typedef int s32;

extern "C" void fn_030ea2cc(void *);
extern "C" void fn_030ea2e0(void *);
extern "C" int data_1046d3ac;

extern "C" void fn_02162220(void *arg0) {
    if ((s32) data_1046d3ac == 0) {
        fn_030ea2e0(arg0);
        (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
        return;
    }
    fn_030ea2cc(arg0);
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
}
