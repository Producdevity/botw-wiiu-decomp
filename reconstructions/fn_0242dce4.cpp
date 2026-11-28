extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);

namespace {
struct Owner {
    unsigned char padding_0[0x84];
    void *resource;
};
}

extern "C" void fn_0242dce4(void *object) {
    Owner *self = static_cast<Owner *>(object);
    void *resource = self->resource;
    if ((resource != 0) && (fn_03485c18(resource) != 0)) {
        fn_03485f68(self->resource);
        self->resource = 0;
    }
}
