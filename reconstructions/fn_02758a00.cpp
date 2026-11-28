extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_10125324;
extern "C" int data_1012532c;

namespace {
struct VirtualObject {
    char padding_0[0xE8];
    void* const* vtable;
};
struct Polymorphic {
    void* const* vtable;
};
}

extern "C" void fn_02758a00(void **object, void *context) {
    void* const* ownerTable;
    Polymorphic *component;

    ownerTable = ((VirtualObject*)*object)->vtable;
    component = ((Polymorphic *(*)(void *))ownerTable[257])(*object);
    if ((component != 0) && (((int (*)())component->vtable[7])() != 0)) {
        fn_037b8284(object, &data_1012532c, context);
        return;
    }
    fn_037b8284(object, &data_10125324, context);
}
