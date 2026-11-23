typedef unsigned char u8;

extern "C" void fn_023fe5b0(void*);

extern "C" void fn_0244c028(void **arg0) {
    void *temp_r12;

    fn_023fe5b0(arg0);
    temp_r12 = (*(void **)((char *)(*arg0) + (0x38C)));
    if (temp_r12 != 0) {
        (*(u8 *)((char *)(temp_r12) + (0x26C))) = (u8) ((*(u8 *)((char *)(temp_r12) + (0x26C))) | 2);
    }
}
