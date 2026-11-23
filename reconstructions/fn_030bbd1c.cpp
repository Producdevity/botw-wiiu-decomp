typedef int s32;

extern "C" void fn_0434c638(void*, void*);

extern "C" void fn_030bbd1c(void *arg0) {
    s32 temp_r0;

    temp_r0 = (*(s32 *)((char *)(arg0) + (0x84)));
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        fn_0434c638((*(void **)((char *)(arg0) + (0x8C))), 0);
        (*(s32 *)((char *)(arg0) + (0x84))) = 4;
    }
}
