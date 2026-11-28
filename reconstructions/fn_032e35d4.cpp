extern "C" void fn_03458474(void*);
extern "C" bool fn_03485c18(const void*);
extern "C" void fn_03485f68(void*);
namespace {
struct Entry {
    char padding_0[0x24];
    unsigned short flags;
};
struct Object {
    char padding_0[4];
    void *handle;
    Entry *entry;
};
}

extern "C" void fn_032e35d4(void* self, void* context)
{
    void* target = ((Object *)self)->entry;
    if (target != 0) {
        Entry *entry = (Entry *)target;
        Object *object = (Object *)self;
        if (entry->flags & 1) {
            fn_03458474(entry);
        }
        if (fn_03485c18(object->handle) != 0) {
            void** slot = &object->handle;
            fn_03485f68(*slot);
        }
    }
}
