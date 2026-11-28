extern "C" void* fn_0307cd30(void* list, void* key);
extern "C" void fn_03074cc0(void* entry);
extern "C" void fn_0307cd5c(void* list, void* key);
extern "C" void fn_0307cda0(void* list);
extern "C" void fn_030ea2e0(void* object);

namespace {
struct Object {
    char padding_0[0x10];
    char list_10[1];
    char padding_11[7];
    void **key_18;
};
}

extern "C" void fn_022a87d0(void* object) {
    void* entry = fn_0307cd30(static_cast<Object *>(object)->list_10, *static_cast<Object *>(object)->key_18);
    if (entry != 0) {
        fn_03074cc0(entry);
        fn_0307cd5c(static_cast<Object *>(object)->list_10, *static_cast<Object *>(object)->key_18);
        return;
    }
    fn_0307cda0(static_cast<Object *>(object)->list_10);
    fn_030ea2e0(object);
}
