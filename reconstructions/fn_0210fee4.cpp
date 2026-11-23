extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" int fn_02b61950(void*, void*);

extern "C" void fn_0210fee4(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_02b616f0((char *)arg0 + 0x9C, temp_r31);
    fn_02b616bc((char *)arg0 + 0x9C, (void *)(fn_02b61950((char *)arg0 + 0x9C, temp_r31)));
}
