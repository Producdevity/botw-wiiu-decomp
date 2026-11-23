extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_1002f0a8[];

extern "C" void* fn_02151810(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0379468c(storage, a);
    *(const void**)((char*)storage + 12) = data_1002f0a8;
    *(unsigned*)((char*)storage + 16) = 0;
    return storage;
}
