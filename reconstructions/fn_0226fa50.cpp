extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0226dc58(void*, const void*);
extern "C" unsigned char data_10068774[];

extern "C" void* fn_0226fa50(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0226dc58(storage, a);
    *(const void**)((char*)storage + 12) = data_10068774;
    *(unsigned char*)((char*)storage + 76) = 0;
    return storage;
}
