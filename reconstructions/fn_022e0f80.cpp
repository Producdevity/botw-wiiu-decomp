extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022e4468(void*, const void*);
extern "C" unsigned char data_10078fdc[];

extern "C" void* fn_022e0f80(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_022e4468(storage, arg);
    *(const void**)((char*)storage + 12) = data_10078fdc;
    return storage;
}
