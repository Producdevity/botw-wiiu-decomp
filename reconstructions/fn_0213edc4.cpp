extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021819e8(void*, const void*);
extern "C" unsigned char data_1002b404[];

extern "C" void* fn_0213edc4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(88);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021819e8(storage, a);
    *(const void**)((char*)storage + 12) = data_1002b404;
    *(unsigned*)((char*)storage + 80) = 0;
    *(unsigned*)((char*)storage + 84) = 0;
    return storage;
}
