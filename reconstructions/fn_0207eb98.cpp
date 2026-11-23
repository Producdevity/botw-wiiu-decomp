extern "C" float data_1000e9b8;
extern "C" int data_1000ea10;
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0207eb98(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_1000ea10;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    *(float*)((char*)storage + 24) = data_1000e9b8;
    *(unsigned*)((char*)storage + 28) = 0;
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
