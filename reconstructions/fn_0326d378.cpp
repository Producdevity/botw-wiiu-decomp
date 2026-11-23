typedef int s32;

extern "C" void fn_03417cc4(int);

extern "C" void *data_1047aff0;

extern "C" void fn_0326d378(void *arg0) {
    if (((void *) data_1047aff0 == 0) || ((s32) (*(s32 *)((char *)(data_1047aff0) + (0x1C))) != 1)) {
        fn_03417cc4(0);
        (*(s32 *)((char *)(arg0) + (0x20))) = (s32) ((*(s32 *)((char *)(arg0) + (0x20))) | 1);
    }
}
