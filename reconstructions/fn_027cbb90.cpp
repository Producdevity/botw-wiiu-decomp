extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027b80bc(void*, const void*);
extern "C" void* fn_02b563e0(void*);
extern "C" unsigned char data_101328ec[];

extern "C" void* fn_027cbb90(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(604);
        if (!storage)
            return storage;
    }
    fn_027b80bc(storage, arg);
    *(const void**)((char*)storage + 12) = data_101328ec;
    fn_02b563e0((char*)storage + 416);
    return storage;
}
