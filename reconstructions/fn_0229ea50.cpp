extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032d3558(void*, const void*);
extern "C" unsigned char data_1006fd70[];

extern "C" void* fn_0229ea50(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    fn_032d3558(storage, arg);
    *(const void**)((char*)storage + 12) = data_1006fd70;
    return storage;
}
