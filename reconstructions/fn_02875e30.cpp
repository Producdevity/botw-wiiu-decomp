extern "C" int data_1014b6a4;
extern "C" float data_1014b5a8;
extern "C" void* fn_026f70fc(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02875e30(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(308);
        if (!storage)
            return storage;
    }
    fn_026f70fc(storage, arg);
    *(const void**)((char*)storage + 12) = &data_1014b6a4;
    void* member = (char*)storage + 284;
    if (!member)
        member = fn_0308e578(20);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
    }
    *(float*)((char*)storage + 304) = data_1014b5a8;
    return storage;
}
