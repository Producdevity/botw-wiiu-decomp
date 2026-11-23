struct Vector3;

extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" Vector3* fn_03793f2c(Vector3* storage);
extern "C" void fn_0379393c(void*);
extern "C" unsigned char data_100aad44[];
extern "C" const float data_100aaca8;

extern "C" void* fn_02403580(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100aad44;
    {
        char* m1 = (char*)storage + 16;
        if (!m1)
            m1 = (char*)fn_0308e578(16);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 32;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_100aaca8;
            *(float*)(m2 + 4) = data_100aaca8;
            *(float*)(m2 + 8) = data_100aaca8;
        }
    }
    fn_03793f2c((Vector3*)((char*)storage + 44));
    fn_0379393c((char*)storage + 56);
    *(unsigned*)((char*)storage + 92) = 0;
    return storage;
}
