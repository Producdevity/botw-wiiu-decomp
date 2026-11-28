extern "C" int fn_02c1b6c0(void*, void*);
extern "C" void fn_0344ae90(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_0236eacc(void **object) {
    void *owner = *object;
    if (fn_02c1b6c0(owner, 0) != 0) {
        void *target = fn_037966a8(owner);
        if (target != 0) {
            fn_0344ae90(target, (void *)data_10549dd0);
        }
    }
}
