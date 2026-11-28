extern "C" void* fn_03ba20d8(void*, void*);
extern "C" void fn_03ba78d4(void*, int, void*, void*, void*);

namespace {
struct Entry {
    char padding_0[4];
    void* value_4;
    char padding_8[4];
    void* value_c;
};

struct Source {
    char padding_0[0xC];
    void* table;
};

struct Holder {
    char padding_0[0x18];
    Source* source;
};
}

extern "C" void fn_03ba310c(void** object, void* key)
{
    void* table = ((Holder*)*object)->source->table;
    Entry* entry = (Entry*)fn_03ba20d8(table, key);
    fn_03ba78d4(object, 2, key, entry->value_c, entry->value_4);
}
