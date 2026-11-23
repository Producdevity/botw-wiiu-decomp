typedef int s32;

extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0222aa94(void *arg0) {
    s32 sp8;
    void *temp_r3;

    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        sp8 = (*(s32 *)((char *)(arg0) + (0x70)));
        fn_0344a898(temp_r3, &sp8);
    }
}
