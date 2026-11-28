typedef int s32;

extern "C" void fn_027f0e6c(void*, void*, void*, int);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100e1b74;

extern "C" void fn_02569aac(void *object) {
    fn_027f0e6c(object, 0, 0, 1);
    fn_037b8284(object, &data_100e1b74, 0);
}
