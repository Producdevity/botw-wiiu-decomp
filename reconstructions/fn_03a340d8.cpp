extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03c48088(void*, const void*);
extern "C" unsigned char data_1035c894[];

extern "C" void* fn_03a340d8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(176);
        if (!storage)
            return storage;
    }
    fn_03c48088(storage, arg);
    *(const void**)((char*)storage + 8) = data_1035c894;
    return storage;
}
