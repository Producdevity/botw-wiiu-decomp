extern "C" unsigned char data_1054a4ec[];

extern "C" void* fn_03009f8c(void* context, int index, int flags);
extern "C" void* fn_030450fc(void* entry);

extern "C" void* fn_0300a04c(void* context, int index, int flags) {
    void* entry = fn_03009f8c(context, index, flags);
    void* result = data_1054a4ec;
    if (entry != 0) {
        result = fn_030450fc(entry);
    }
    return result;
}
