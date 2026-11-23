extern "C" int data_101b63d4;
extern "C" int data_101b655c;
extern "C" void fn_02bac440(void*, void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02baea94(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(216);
        if (!storage)
            return storage;
    }
    fn_02bac440(storage, (void*)arg);
    *(const void**)((char*)storage + 12) = &data_101b63d4;
    *(const void**)((char*)storage + 20) = &data_101b655c;
    *(unsigned*)((char*)storage + 192) = 0;
    *(unsigned*)((char*)storage + 196) = 0;
    *(unsigned*)((char*)storage + 200) = 0;
    *(unsigned*)((char*)storage + 204) = 0;
    *(unsigned*)((char*)storage + 208) = 0;
    *(unsigned*)((char*)storage + 212) = 0;
    return storage;
}
