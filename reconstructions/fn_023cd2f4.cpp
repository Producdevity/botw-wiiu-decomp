extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" void fn_02b7d5b8(void*);
extern "C" unsigned char data_100a291c[];
extern "C" const float data_100a2890;

extern "C" void* fn_023cd2f4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a291c;
    {
        char* m1 = (char*)storage + 16;
        if (!m1)
            m1 = (char*)fn_0308e578(20);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
        }
    }
    *(unsigned char*)((char*)storage + 36) = 0;
    {
        char* m2 = (char*)storage + 40;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_100a2890;
            *(float*)(m2 + 4) = data_100a2890;
            *(float*)(m2 + 8) = data_100a2890;
        }
    }
    fn_02b7d5b8((char*)storage + 52);
    return storage;
}
