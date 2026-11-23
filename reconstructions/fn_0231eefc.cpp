extern "C" unsigned char data_10085780[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0231eefc(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0379468c(storage, a);
    *(const void**)((char*)storage + 12) = data_10085780;
    void* member = (char*)storage + 16;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    *(unsigned char*)((char*)storage + 24) = 0;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
