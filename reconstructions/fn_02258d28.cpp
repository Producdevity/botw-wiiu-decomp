extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03261350(void*, const void*);
extern "C" unsigned char data_1006397c[];

extern "C" void* fn_02258d28(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_03261350(storage, a);
    *(const void**)((char*)storage + 12) = data_1006397c;
    *(unsigned*)((char*)storage + 136) = 0;
    return storage;
}
