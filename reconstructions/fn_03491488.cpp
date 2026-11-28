namespace {
struct Object {
    char padding_0[140];
    void *child;
};
}

extern "C" void fn_034acae0(void*, void*, void*);

extern "C" void fn_03491488(void* object, void* first, void* second) {
    fn_034acae0(((Object *)object)->child, first, second);
}
