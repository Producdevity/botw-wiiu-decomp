extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029b527c(void*, const void*);
extern "C" unsigned char data_1017a638[];

extern "C" void* fn_029b540c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_029b527c(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017a638;
    return storage;
}
