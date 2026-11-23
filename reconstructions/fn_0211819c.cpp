extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02117438(void*, const void*);
extern "C" unsigned char data_10025b78[];

extern "C" void* fn_0211819c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(164);
        if (!storage)
            return storage;
    }
    fn_02117438(storage, arg);
    *(const void**)((char*)storage + 12) = data_10025b78;
    return storage;
}
