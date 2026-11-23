extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0221279c(void*, const void*);
extern "C" unsigned char data_1007ad28[];

extern "C" void* fn_022ec930(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_0221279c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1007ad28;
    return storage;
}
