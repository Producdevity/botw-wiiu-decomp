extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0255fa8c(void*, const void*);
extern "C" unsigned char data_100e0110[];
extern "C" unsigned char data_100e0250[];

extern "C" void* fn_025614fc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0255fa8c(storage, a);
    *(const void**)((char*)storage + 12) = data_100e0110;
    *(const void**)((char*)storage + 52) = data_100e0250;
    *(unsigned*)((char*)storage + 96) = 0;
    return storage;
}
