extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" int fn_02b61950(void*, void*);

extern "C" void fn_0210fee4(void **object) {
    void *context;

    context = *object;
    fn_02b616f0((char *)object + 0x9C, context);
    fn_02b616bc((char *)object + 0x9C, (void *)(fn_02b61950((char *)object + 0x9C, context)));
}
