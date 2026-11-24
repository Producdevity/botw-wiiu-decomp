extern "C" bool fn_0378da88(void*);
extern "C" bool fn_0378dacc(void*, void*);

struct Opaque_Table_fn_02a32e08 {
    unsigned char padding_0[1044];
    void* (*lookup)(void*);
};

struct Opaque_Key_fn_02a32e08 {
    unsigned char padding_0[232];
    Opaque_Table_fn_02a32e08* table;
};

struct Opaque_fn_02a32e08 {
    unsigned char padding_0[20];
    unsigned char slot[1];
};

extern "C" bool fn_02a32e08(Opaque_fn_02a32e08* object, Opaque_Key_fn_02a32e08* key) {
    char* found = (char*)key->table->lookup(key);
    if (found && fn_0378da88(object->slot) && fn_0378dacc(found + 8, object->slot)) {
        return true;
    }
    return false;
}
