typedef int s32;

extern "C" int fn_0359baa8(void*, void*, void*);
extern "C" void fn_03713120(void*, int, int, int, void*);

extern "C" s32 data_100480f0;

extern "C" void fn_021d8210(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    void *temp_r3;

    fn_0359baa8((*(void **)((char *)(arg0) + (0))), &data_100480f0, 0);
    temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x394)));
    if (temp_r3 != 0) {
        fn_03713120(temp_r3, 0x42, 0x11, 0, 0);
    }
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[71])(arg0);
    ((s32 (*)(void *))(vt2 = *(void* const**)((char *)(arg0) + (0xC)))[73])(arg0);
}
