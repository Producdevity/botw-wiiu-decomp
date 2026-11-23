typedef int s32;

extern "C" void fn_03172c48(void*, void*);
extern "C" void fn_0378da14(void*, void*);

extern "C" void *data_1046ce48;

extern "C" void fn_02c0f850(s32 arg0, void *arg1) {
    fn_0378da14((void *)(arg0 + 0x1F4), arg1);
    if ((void *) data_1046ce48 != 0) {
        fn_03172c48(data_1046ce48, (void *)(arg0 + 0x1F4));
    }
}
