extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0271b454(void*, const void*);
extern "C" unsigned char data_1011cfc4[];

extern "C" void* fn_0271ceb4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0271b454(storage, a);
    *(const void**)((char*)storage + 12) = data_1011cfc4;
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
