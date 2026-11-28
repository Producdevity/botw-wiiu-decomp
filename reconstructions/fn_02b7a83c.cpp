namespace {
struct Object {
    char padding_0[0x390];
    void* table;
};
}

extern "C" int fn_0315bce4(void*, void*, void*);

extern "C" int fn_02b7a83c(void* object, void* key) {
    Object* self = (Object*)object;
    if (self->table != 0) {
        int* entry = 0;
        if (fn_0315bce4(self->table, &entry, key) != 0) {
            return *entry;
        }
    }
    return 0;
}
