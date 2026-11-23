typedef int s32;

extern "C" void fn_03ef84ac(void*, void*);
extern "C" void fn_03ef8510(void*, void*);

extern "C" void fn_03edfcf8(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0xC)));
    if (temp_r3 != 0) {
        fn_03ef84ac(temp_r3, (char *)arg0 + 8);
        fn_03ef8510((*(void **)((char *)(arg0) + (0xC))), (char *)arg0 + 8);
    }
    (*(s32 *)((char *)(arg0) + (0x24))) = 0;
    (*(s32 *)((char *)(arg0) + (0x2C))) = -1;
}
