typedef int s32;

extern "C" void fn_02674e00(void*, int);
extern "C" void fn_02674e3c(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1010ca34;

extern "C" void fn_026a1da8(void *arg0) {
    fn_037b8284(arg0, &data_1010ca34, 0);
    fn_02674e00(arg0, 6);
    fn_02674e3c(arg0, 0);
}
