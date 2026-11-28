extern "C" void fn_03167298(void*, void*);
extern "C" void fn_037e5f68(void*);
extern "C" void fn_037fbc1c(void*);

extern "C" void* data_1046cd60;

extern "C" void fn_02dbe1a8(int base) {
    fn_037fbc1c(0);
    if (data_1046cd60 != 0) {
        fn_03167298(data_1046cd60, 0);
    }
    fn_037e5f68((void*)(base + 0xA4));
}
