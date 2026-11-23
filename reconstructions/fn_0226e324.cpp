extern "C" int data_1006835c;
extern "C" float data_10068318;
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0226e324(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_1006835c;
    void* member = (char*)storage + 16;
    if (!member)
        member = fn_0308e578(20);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
    }
    *(float*)((char*)storage + 36) = data_10068318;
    *(float*)((char*)storage + 40) = data_10068318;
    return storage;
}
