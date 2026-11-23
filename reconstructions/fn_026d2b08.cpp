extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026d42ec(void*, const void*);
extern "C" unsigned char data_10113a88[];

extern "C" void* fn_026d2b08(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(180);
        if (!storage)
            return storage;
    }
    fn_026d42ec(storage, arg);
    *(const void**)((char*)storage + 12) = data_10113a88;
    return storage;
}
