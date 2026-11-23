extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02caeff8(void*, const void*);
extern "C" unsigned char data_1008ec48[];

extern "C" void* fn_0235e100(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    fn_02caeff8(storage, arg);
    *(const void**)((char*)storage + 12) = data_1008ec48;
    return storage;
}
