extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0289d338(void*, const void*);
extern "C" unsigned char data_1015f67c[];

extern "C" void* fn_02900a2c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    fn_0289d338(storage, arg);
    *(const void**)((char*)storage + 12) = data_1015f67c;
    return storage;
}
