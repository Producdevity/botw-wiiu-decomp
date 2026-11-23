extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02761d18(void*, const void*);
extern "C" unsigned char data_101275a0[];

extern "C" void* fn_02762224(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02761d18(storage, a);
    *(const void**)((char*)storage + 12) = data_101275a0;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
