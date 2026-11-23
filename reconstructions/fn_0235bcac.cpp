extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0235af50(void*, const void*);
extern "C" unsigned char data_1008e430[];

extern "C" void* fn_0235bcac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0235af50(storage, a);
    *(const void**)((char*)storage + 12) = data_1008e430;
    *(unsigned*)((char*)storage + 124) = 0;
    return storage;
}
