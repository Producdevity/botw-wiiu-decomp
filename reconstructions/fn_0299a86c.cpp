extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_101765b4[];

extern "C" void* fn_0299a86c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_037b7cf0(storage, a);
    *(const void**)((char*)storage + 12) = data_101765b4;
    *(unsigned char*)((char*)storage + 32) = 1;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
