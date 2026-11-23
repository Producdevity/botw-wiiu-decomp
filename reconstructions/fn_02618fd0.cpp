extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02616778(void*, const void*);
extern "C" unsigned char data_100f7c8c[];

extern "C" void* fn_02618fd0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_02616778(storage, arg);
    *(const void**)((char*)storage + 12) = data_100f7c8c;
    return storage;
}
