extern "C" int fn_02eb7534(void*, void*, void*);
extern "C" int fn_030884bc(void*);
extern "C" void* data_10469978;

extern "C" int fn_03072bd4(void *context) {
    int result;
    void *manager = data_10469978;
    if (manager == 0) {
        return 0;
    }
    if (fn_030884bc(0) != 0) {
        return 0x3E7;
    }
    result = 0;
    fn_02eb7534(manager, 0, &result);
    return result;
}
