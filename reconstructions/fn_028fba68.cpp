typedef unsigned char u8;
typedef int s32;

extern "C" void fn_025e754c(void *, void *);
extern "C" u8 fn_03399fdc(void *);
extern "C" void fn_0348e0e0(void *, void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1015e86c;

extern "C" void fn_028fba68(void *arg0, void *arg1) {
    void* const* vt1;
    void *temp_r3;

    if ((fn_03399fdc((*(void **)((char *)(arg0) + (0)))) != 0) && (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[71])(arg0) == 0)) {
        fn_037b8284(arg0, &data_1015e86c, 0);
        return;
    }
    temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0xF4)));
    if (temp_r3 != 0) {
        fn_0348e0e0(temp_r3, 0);
    }
    fn_025e754c(arg0, arg1);
}
