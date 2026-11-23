extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0284bb90(void*, const void*);
extern "C" unsigned char data_10106cd8[];

extern "C" void* fn_02678e60(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_0284bb90(storage, arg);
    *(const void**)((char*)storage + 12) = data_10106cd8;
    return storage;
}
