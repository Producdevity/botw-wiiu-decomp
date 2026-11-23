extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03c491d8(void*, const void*);
extern "C" unsigned char data_1035e5a8[];

extern "C" void* fn_03a49aec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(164);
        if (!storage)
            return storage;
    }
    fn_03c491d8(storage, arg);
    *(const void**)((char*)storage + 8) = data_1035e5a8;
    return storage;
}
