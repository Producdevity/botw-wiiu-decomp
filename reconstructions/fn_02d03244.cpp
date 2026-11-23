typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern "C" int fn_037b7cac(void *);
extern "C" void fn_037b7e9c(void *, unsigned int, void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101ded30;
extern "C" s32 data_101ded40;

extern "C" void fn_02d03244(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    if (fn_037b7cac(arg0) != 0) {
        fn_037b7e9c(arg0, (u32) (*(u16 *)((char *)(arg0) + (0x14))), 0);
        return;
    }
    temp_r3 = (*(void **)((char *)(arg0) + (0)));
    if (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[389])(temp_r3) != 0) {
        fn_037b8284(arg0, &data_101ded30, 0);
        return;
    }
    fn_037b8284(arg0, &data_101ded40, 0);
}
