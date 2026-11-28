extern "C" unsigned char data_1054a4ec[];

extern "C" void* fn_03009f8c(void* context, int index, int flags);
extern "C" void* fn_031a7f40(void* entry);

extern "C" void* fn_0300a0d8(void* context, int index, int flags) {
    void* entry = fn_03009f8c(context, index, flags);
    void* result = data_1054a4ec;
    if (entry != 0) {
        result = fn_031a7f40(entry);
    }
    return result;
}
