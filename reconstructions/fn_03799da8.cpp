struct Opaque_03799da8 {
    unsigned char unknown_000[1096];
    void* table;
};

extern "C" void* fn_032a1b6c(void* table, unsigned int key);

extern "C" void* fn_03799da8(Opaque_03799da8* owner, unsigned int key) {
    void* result = owner->table;
    if (result)
        result = fn_032a1b6c(result, key);
    return result;
}
