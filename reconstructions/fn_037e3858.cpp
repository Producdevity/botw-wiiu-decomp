typedef unsigned char u8;
typedef int s32;

extern "C" void fn_034fc414(void *);
extern "C" void fn_037e2ecc(void*);
extern "C" void fn_037e2f54(void*);
extern "C" void fn_037e37d0(void*, void*);
extern "C" int fn_037fbff0(void);

extern "C" void fn_037e3858(void *arg0, void *arg1) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x2C))) == 0) {
        fn_037fbff0();
        return;
    }
    fn_037e2ecc(arg0);
    fn_037e2f54(arg0);
    if ((s32) ((((u8) (*(u8 *)((char *)(arg0) + (0x24))) >> 1U) & 1) ^ 1) != 0) {
        fn_034fc414((char *)arg0 + 0x114);
    }
    fn_037e37d0(arg0, arg1);
}
