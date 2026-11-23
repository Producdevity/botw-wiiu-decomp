extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0242a57c(void*, const void*);
extern "C" unsigned char data_1003b640[];
extern "C" const float data_1003b608;

extern "C" void* fn_02195564(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_0242a57c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003b640;
    *(unsigned*)((char*)storage + 52) = 0;
    *(unsigned*)((char*)storage + 56) = 0;
    *(float*)((char*)storage + 60) = data_1003b608;
    *(unsigned char*)((char*)storage + 64) = 0;
    return storage;
}
