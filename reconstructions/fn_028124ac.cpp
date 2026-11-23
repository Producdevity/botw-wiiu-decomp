extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0280cf80(void*, const void*);
extern "C" unsigned char data_1013cc0c[];

extern "C" void* fn_028124ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_0280cf80(storage, arg);
    *(const void**)((char*)storage + 12) = data_1013cc0c;
    return storage;
}
