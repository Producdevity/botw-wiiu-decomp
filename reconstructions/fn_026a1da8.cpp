typedef int s32;

extern "C" void* fn_02674e00(void*, int);
extern "C" void* fn_02674e3c(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1010ca34;

extern "C" void fn_026a1da8(void *object) {
    fn_037b8284(object, &data_1010ca34, 0);
    fn_02674e00(object, 6);
    fn_02674e3c(object, 0);
}
