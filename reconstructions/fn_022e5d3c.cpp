extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022e6004(void*, const void*);
extern "C" unsigned char data_10079d78[];

extern "C" void* fn_022e5d3c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(156);
        if (!storage)
            return storage;
    }
    fn_022e6004(storage, arg);
    *(const void**)((char*)storage + 12) = data_10079d78;
    return storage;
}
