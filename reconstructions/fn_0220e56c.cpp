typedef int s32;

extern "C" void fn_02210af8(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0220e56c(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_02b616f0((char *)arg0 + 0x4C, temp_r31);
    fn_02b616bc((char *)arg0 + 0x4C, fn_037966a8(temp_r31));
    fn_02210af8((s32) arg0);
}
