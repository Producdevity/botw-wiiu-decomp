extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02540e0c(void*, const void*);
extern "C" unsigned char data_100da158[];

extern "C" void* fn_02540528(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_02540e0c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100da158;
    return storage;
}
