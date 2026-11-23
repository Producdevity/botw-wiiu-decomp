extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02163a88(void*, const void*);
extern "C" unsigned char data_1003dd50[];

extern "C" void* fn_021a36ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_02163a88(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003dd50;
    *(unsigned*)((char*)storage + 28) = 0;
    *(unsigned*)((char*)storage + 32) = 0;
    *(unsigned*)((char*)storage + 36) = 0;
    *(unsigned*)((char*)storage + 40) = 0;
    return storage;
}
