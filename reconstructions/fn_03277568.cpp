extern "C" unsigned char data_1029dd70[];
extern "C" void* fn_037b7cf0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_03277568(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(56);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1029dd70;
    *(unsigned char*)((char*)storage + 32) = 0;
    *(unsigned char*)((char*)storage + 33) = 0;
    *(unsigned*)((char*)storage + 36) = -1;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    *(unsigned*)((char*)storage + 48) = 0;
    *(unsigned*)((char*)storage + 52) = 0;
    return storage;
}
