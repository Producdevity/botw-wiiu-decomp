typedef int s32;

extern "C" void fn_02b41780(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1012d7b8;

extern "C" void fn_02790b20(void **arg0) {
    fn_02b41780(*arg0, 0);
    fn_037b8284(arg0, &data_1012d7b8, 0);
}
