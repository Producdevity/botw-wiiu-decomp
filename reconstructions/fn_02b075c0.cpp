typedef int s32;

extern "C" int fn_03290df8(void*);
extern "C" void fn_03713120(void*, int, int, int, void*);
extern "C" void * data_10467bfc;

extern "C" void fn_02b075c0(void *arg0) {
    void *temp_r3;

    if ((void *) data_10467bfc != 0) {
        temp_r3 = (*(void **)((char *)(data_10467bfc) + (0x50)));
        if ((temp_r3 != 0) && ((s32) ((*(s32 *)((char *)(arg0) + (0x848))) + fn_03290df8(temp_r3)) < (s32) (*(s32 *)((char *)(arg0) + (0x84C))))) {
            fn_03713120((*(void **)((char *)(arg0) + (0x394))), 0x42, 2, 1, 0);
            return;
        }
    }
    fn_03713120((*(void **)((char *)(arg0) + (0x394))), 0x42, 2, 0, 0);
}
