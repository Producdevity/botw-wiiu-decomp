extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02357934(void*, const void*);
extern "C" unsigned char data_1008defc[];

extern "C" void* fn_0235a420(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02357934(storage, a);
    *(const void**)((char*)storage + 12) = data_1008defc;
    *(unsigned*)((char*)storage + 120) = 0;
    return storage;
}
