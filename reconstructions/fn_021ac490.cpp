extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021ab9dc(void*, const void*);
extern "C" unsigned char data_1003f4d0[];

extern "C" void* fn_021ac490(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_021ab9dc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003f4d0;
    return storage;
}
