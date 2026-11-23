typedef int s32;

extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" void fn_0383ec68(void*, int, int, void*);

extern "C" s32 data_10149bc0;

extern "C" void fn_0286bad4(void **arg0) {
    fn_0383ec68(*arg0, 0x19, 1, 0);
    fn_037b8284(arg0, &data_10149bc0, 0);
}
