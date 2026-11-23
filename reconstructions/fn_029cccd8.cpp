extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029ccf60(void*, const void*);
extern "C" unsigned char data_1017ef60[];

extern "C" void* fn_029cccd8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    fn_029ccf60(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017ef60;
    return storage;
}
