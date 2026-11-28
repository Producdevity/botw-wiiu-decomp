extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" void * fn_02b619b8(void *memory);
extern "C" unsigned char data_1005cfec[];

extern "C" void* fn_02231678(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1005cfec;
    fn_02b619b8((char*)storage + 16);
    return storage;
}
