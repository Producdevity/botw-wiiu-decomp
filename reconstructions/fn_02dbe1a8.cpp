typedef int s32;

extern "C" void fn_03167298(void*, void*);
extern "C" void fn_037e5f68(void *);
extern "C" void fn_037fbc1c(void*);

extern "C" void *data_1046cd60;

extern "C" void fn_02dbe1a8(s32 arg0) {
    fn_037fbc1c(0);
    if ((void *) data_1046cd60 != 0) {
        fn_03167298(data_1046cd60, 0);
    }
    fn_037e5f68((void *)(arg0 + 0xA4));
}
