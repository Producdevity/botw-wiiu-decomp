extern "C" int data_100e07bc;
extern "C" float data_100e0688;
extern "C" int data_100e069c;
extern "C" void* fn_037b7cf0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_03125a58(void*);

extern "C" void* fn_0256304c(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_037b7cf0(storage, a);
    fn_03125a58((char*)storage + 32);
    *(const void**)((char*)storage + 12) = &data_100e069c;
    *(const void**)((char*)storage + 52) = &data_100e07bc;
    *(float*)((char*)storage + 56) = data_100e0688;
    return storage;
}
