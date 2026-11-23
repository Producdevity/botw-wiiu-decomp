extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027b80bc(void*, const void*);
extern "C" unsigned char data_1012ee20[];

extern "C" void* fn_027a0a0c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(416);
        if (!storage)
            return storage;
    }
    fn_027b80bc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1012ee20;
    return storage;
}
