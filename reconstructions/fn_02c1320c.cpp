extern "C" void fn_02c1413c(void *);
extern "C" void fn_02c141cc(void*, void*, void*);
extern "C" void fn_02c14a08(void*, void*, void*);
extern "C" void fn_02c18648(void *);
extern "C" void fn_02c186d8(void*, void*, void*);
extern "C" void fn_02c18e58(void*, void*, void*);

extern "C" void fn_02c1320c(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0xC)));
    if (temp_r3 != 0) {
        fn_02c1413c(temp_r3);
        fn_02c14a08((*(void **)((char *)(arg0) + (0xC))), (char *)arg0 + 0x18, (*(void **)((char *)(arg0) + (0))));
        fn_02c141cc((*(void **)((char *)(arg0) + (0xC))), (char *)arg0 + 0x10, (*(void **)((char *)(arg0) + (0))));
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x24)));
    if (temp_r3_2 != 0) {
        fn_02c18648(temp_r3_2);
        fn_02c18e58((*(void **)((char *)(arg0) + (0x24))), (char *)arg0 + 0x30, (*(void **)((char *)(arg0) + (0))));
        fn_02c186d8((*(void **)((char *)(arg0) + (0x24))), (char *)arg0 + 0x28, (*(void **)((char *)(arg0) + (0))));
    }
}
