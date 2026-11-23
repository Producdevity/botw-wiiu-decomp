extern "C" float data_10067480;
extern "C" int data_100674cc;
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0226a5a4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_100674cc;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    *(float*)((char*)storage + 28) = data_10067480;
    *(unsigned*)((char*)storage + 24) = 0;
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
