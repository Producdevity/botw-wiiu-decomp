namespace {
struct Handle {
    unsigned char padding_0[4];
    int id;
    void *resource;
};
}

extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);

extern "C" void fn_02491ae8(void *object) {
    Handle *handle = static_cast<Handle *>(object);
    void *resource = handle->resource;
    handle->id = 0;
    if (resource != 0 && fn_03485c18(resource) != 0) {
        fn_03485f68(resource);
    }
}
