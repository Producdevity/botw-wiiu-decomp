extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_10093f4c[];
extern "C" const float data_10093ef4;

extern "C" void* fn_0237ecdc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10093f4c;
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
            *(float*)(m2) = data_10093ef4;
            *(float*)(m2 + 4) = data_10093ef4;
            *(float*)(m2 + 8) = data_10093ef4;
        }
    }
    *(unsigned char*)((char*)storage + 44) = 0;
    return storage;
}
