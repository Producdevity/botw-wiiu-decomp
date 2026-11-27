namespace {
struct Object {
    char padding_0[0x390];
    void *table;
};
}

extern "C" int fn_0315bce4(void*, void*, void*);

extern "C" int fn_02b7a83c(void *arg0, void *arg1) {
    Object *object = (Object *) arg0;
    if (object->table != 0) {
        int *entry = 0;
        if (fn_0315bce4(object->table, &entry, arg1) != 0) {
            return *entry;
        }
    }
    return 0;
}
