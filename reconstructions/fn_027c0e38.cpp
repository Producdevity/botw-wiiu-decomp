typedef int s32;

extern "C" void fn_02b41780(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10131580;

extern "C" void fn_027c0e38(void **object) {
    fn_02b41780(*object, 0);
    fn_037b8284(object, &data_10131580, 0);
}
