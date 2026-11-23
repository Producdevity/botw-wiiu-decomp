extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_102a7900[];

extern "C" void* fn_032c69f8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0379468c(storage, a);
    *(const void**)((char*)storage + 12) = data_102a7900;
    *(unsigned*)((char*)storage + 16) = 0;
    return storage;
}
