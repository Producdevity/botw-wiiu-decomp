typedef unsigned int u32;

extern "C" unsigned fn_03bf65a0(void *);
extern "C" unsigned fn_03bf65a8(void *);
extern "C" void fn_0434ac38(void *, unsigned int);

extern "C" void fn_03bf65b0(void *arg0) {
    void *temp_r3;

    fn_0434ac38((void *)(fn_03bf65a0(arg0)), (*(u32 *)((char *)(arg0) + (0x20))));
    temp_r3 = (void *)(fn_03bf65a8(arg0));
    if (temp_r3 != 0) {
        fn_0434ac38(temp_r3, (*(u32 *)((char *)(arg0) + (0x28))));
    }
}
