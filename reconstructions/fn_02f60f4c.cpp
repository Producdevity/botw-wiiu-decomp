typedef int s32;

extern "C" unsigned char fn_02efc068(void *);
extern "C" void fn_02f60e48(void*);

extern "C" void fn_02f60f4c(void *arg0) {
    s32 temp_r12;

    temp_r12 = (*(s32 *)((char *)(arg0) + (0x1B68)));
    if ((temp_r12 != 0) && (fn_02efc068((void *)(temp_r12 + 0x484)) != 0)) {
        fn_02f60e48(arg0);
    }
}
