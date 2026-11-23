extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_102a4b60[];

extern "C" void* fn_032b17a8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_102a4b60;
    return storage;
}
