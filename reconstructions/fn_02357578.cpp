extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0235722c(void*, const void*);
extern "C" unsigned char data_1008d968[];

extern "C" void* fn_02357578(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    fn_0235722c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1008d968;
    return storage;
}
