extern float data_101e4818;

extern "C" float fn_02d49e9c(void* context) {
    unsigned char* bytes = static_cast<unsigned char*>(context);
    void* value = *reinterpret_cast<void**>(bytes + 48);
    if (value != 0) {
        const unsigned char* object = static_cast<const unsigned char*>(value);
        return *reinterpret_cast<const float*>(object + 4900);
    }
    return data_101e4818;
}
