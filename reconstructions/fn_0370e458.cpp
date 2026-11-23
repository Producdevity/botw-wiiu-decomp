extern "C" unsigned char data_10549fec[];

extern "C" void* fn_0370d85c(void* context, int index, int flags);
extern "C" void* fn_037143ec(void* entry);

extern "C" void* fn_0370e458(void* context, int index, int flags) {
    void* entry = fn_0370d85c(context, index, flags);
    void* result = data_10549fec;
    if (entry != 0) {
        result = fn_037143ec(entry);
    }
    return result;
}
