typedef int s32;

extern "C" void fn_02674e00(void*, int);
extern "C" void fn_02674e3c(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1010c9cc;

extern "C" void fn_026a1834(void *arg0) {
    fn_037b8284(arg0, &data_1010c9cc, 0);
    fn_02674e00(arg0, 0);
    fn_02674e3c(arg0, 0);
}
