extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02759400(void*, const void*);
extern "C" unsigned char data_10125558[];

extern "C" void* fn_02758d3c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02759400(storage, a);
    *(const void**)((char*)storage + 12) = data_10125558;
    *(unsigned*)((char*)storage + 100) = 0;
    return storage;
}
