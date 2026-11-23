typedef int s32;

extern "C" void fn_02b7b4fc(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100f1648;

extern "C" void fn_025e88bc(void *arg0) {
    fn_02b7b4fc((*(void **)((char *)(arg0) + (0))), *(*(void ***)((char *)(arg0) + (0x6C))));
    fn_037b8284(arg0, &data_100f1648, 0);
}
