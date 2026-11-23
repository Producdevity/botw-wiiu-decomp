extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020fc9b8(void*, const void*);
extern "C" unsigned char data_1001ff50[];

extern "C" void* fn_020fa8bc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    fn_020fc9b8(storage, arg);
    *(const void**)((char*)storage + 12) = data_1001ff50;
    return storage;
}
