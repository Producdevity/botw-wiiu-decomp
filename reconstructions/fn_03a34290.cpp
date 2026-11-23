extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03c48464(void*, const void*);
extern "C" unsigned char data_1035c944[];

extern "C" void* fn_03a34290(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(192);
        if (!storage)
            return storage;
    }
    fn_03c48464(storage, arg);
    *(const void**)((char*)storage + 8) = data_1035c944;
    return storage;
}
