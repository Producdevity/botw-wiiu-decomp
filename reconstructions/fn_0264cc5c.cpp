extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025a0360(void*, const void*);
extern "C" unsigned char data_100ffb50[];

extern "C" void* fn_0264cc5c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_025a0360(storage, arg);
    *(const void**)((char*)storage + 12) = data_100ffb50;
    return storage;
}
