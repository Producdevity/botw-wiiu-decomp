extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02468c84(void*, const void*);
extern "C" unsigned char data_1008e880[];

extern "C" void* fn_0235ce08(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02468c84(storage, a);
    *(const void**)((char*)storage + 12) = data_1008e880;
    *(unsigned*)((char*)storage + 116) = 0;
    *(unsigned*)((char*)storage + 120) = 0;
    return storage;
}
