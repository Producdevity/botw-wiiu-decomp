extern "C" void fn_03172c48(void*, void*);
extern "C" void fn_0378da14(void* handle);

extern "C" void* data_1046ce48;

extern "C" void fn_02c0f850(int base, void* unused) {
    fn_0378da14((void*)(base + 0x1F4));
    if (data_1046ce48 != 0) {
        fn_03172c48(data_1046ce48, (void*)(base + 0x1F4));
    }
}
