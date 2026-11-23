extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02441ec8(void*, const void*);
extern "C" unsigned char data_100b6054[];

extern "C" void* fn_02441848(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02441ec8(storage, a);
    *(const void**)((char*)storage + 8) = data_100b6054;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
