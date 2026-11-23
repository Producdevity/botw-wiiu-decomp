extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03261350(void*, const void*);
extern "C" unsigned char data_1002740c[];

extern "C" void* fn_02121e24(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    fn_03261350(storage, arg);
    *(const void**)((char*)storage + 12) = data_1002740c;
    return storage;
}
