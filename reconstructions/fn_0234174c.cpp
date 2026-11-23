typedef int s32;

extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0234174c(void *arg0) {
    struct { s32 f8; } sp;
    void *temp_r3;

    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        sp.f8 = (*(s32 *)((char *)(arg0) + (0x20)));
        fn_0344a898(temp_r3, &sp.f8);
    }
}
