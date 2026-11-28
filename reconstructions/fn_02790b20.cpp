typedef int s32;

extern "C" void fn_02b41780(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1012d7b8;

extern "C" void fn_02790b20(void **object) {
    fn_02b41780(*object, 0);
    fn_037b8284(object, &data_1012d7b8, 0);
}
