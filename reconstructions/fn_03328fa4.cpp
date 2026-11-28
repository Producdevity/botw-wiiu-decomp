extern "C" void fn_030ea2e0(void *);
extern "C" void fn_0344afc8(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_03328fa4(void **slot) {
    void *target;

    target = fn_037966a8(*slot);
    if (target == 0) {
        fn_030ea2e0(slot);
        return;
    }
    fn_0344afc8(target, (void *)data_10549dd0);
}
