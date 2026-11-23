typedef int s32;

extern "C" void fn_02b1512c(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" int fn_02b61950(void*, void*);

extern "C" void fn_022e2a1c(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_02b616f0((char *)arg0 + 0xB8, temp_r31);
    fn_02b616bc((char *)arg0 + 0xB8, (void *)(fn_02b61950((char *)arg0 + 0xB8, temp_r31)));
    fn_02b1512c((s32) ((char *)arg0 + 0xC0));
}
