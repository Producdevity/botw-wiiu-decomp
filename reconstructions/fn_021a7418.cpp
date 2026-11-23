typedef int s32;

extern "C" void fn_021aad10(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_021a7418(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_02b616f0((char *)arg0 + 0x28, temp_r31);
    fn_02b616bc((char *)arg0 + 0x28, fn_037966a8(temp_r31));
    fn_021aad10((s32) arg0);
}
