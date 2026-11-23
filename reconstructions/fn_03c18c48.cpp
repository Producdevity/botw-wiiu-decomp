typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_04217fd4(void *, unsigned);

extern "C" s32 data_103dba98;

extern "C" void fn_03c18c48(void *arg0, void *arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x34))) = &data_103dba98;
        fn_04217fd4((char *)arg0 + 8, 2U);
        if ((s32) arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
