struct Opaque_03799d7c {
    unsigned char unknown_000[1096];
    void* table;
};

extern "C" void* fn_032a12a0(void* table, unsigned int key);

extern "C" void* fn_03799d7c(Opaque_03799d7c* owner, unsigned int key) {
    void* result = owner->table;
    if (result)
        result = fn_032a12a0(result, key);
    return result;
}
