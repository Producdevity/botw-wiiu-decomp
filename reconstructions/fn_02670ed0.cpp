typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02670d08(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1010589c;

extern "C" void fn_02670ed0(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x3C))) == 0) {
        fn_02670d08(arg0);
    }
    fn_037b8284(arg0, &data_1010589c, 0);
}
