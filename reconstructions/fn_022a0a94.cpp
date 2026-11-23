typedef int s32;

extern "C" void fn_0236202c(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_022a0a94(void **arg0) {
    fn_02b616bc((char *)arg0 + 0xB0, fn_037966a8(*arg0));
    fn_0236202c((s32) arg0);
}
