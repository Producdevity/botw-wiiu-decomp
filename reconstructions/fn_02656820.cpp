extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026546dc(void*, const void*);
extern "C" unsigned char data_10101238[];

extern "C" void* fn_02656820(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    fn_026546dc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10101238;
    return storage;
}
