extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026f70fc(void*, const void*);
extern "C" unsigned char data_10109e50[];

extern "C" void* fn_0268b518(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(284);
        if (!storage)
            return storage;
    }
    fn_026f70fc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10109e50;
    return storage;
}
