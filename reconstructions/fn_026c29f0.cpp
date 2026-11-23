extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026c3064(void*, const void*);
extern "C" unsigned char data_10110f48[];

extern "C" void* fn_026c29f0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(84);
        if (!storage)
            return storage;
    }
    fn_026c3064(storage, arg);
    *(const void**)((char*)storage + 12) = data_10110f48;
    return storage;
}
