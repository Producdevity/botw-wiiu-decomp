extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02596418(void*, const void*);
extern "C" unsigned char data_10111518[];

extern "C" void* fn_026c4534(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(84);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02596418(storage, a);
    *(const void**)((char*)storage + 12) = data_10111518;
    *(unsigned*)((char*)storage + 76) = 0;
    *(unsigned*)((char*)storage + 80) = 0;
    return storage;
}
