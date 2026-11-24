extern "C" void fn_0378da14(void* handle);
extern "C" int fn_0378dce8(int, void*, void*);
extern "C" void fn_03986e68(void* object, int value);
extern "C" void* data_1046cd00;

struct Opaque_0328a9d0_SourceVtable {
    unsigned char unknown_00[0x244];
    int (*value)(void* self);
};

struct Opaque_0328a9d0_Source {
    Opaque_0328a9d0_SourceVtable* vtable;
};

struct Opaque_0328a9d0_Global {
    unsigned char unknown_00[0x90];
    Opaque_0328a9d0_Source* source;
};

struct Opaque_0328a9d0 {
    unsigned char unknown_00[0x330];
    void* target;
    unsigned char unknown_334[0x208];
    unsigned char handle[4];
};

extern "C" void fn_0328a9d0(Opaque_0328a9d0* self, void* request) {
    if (request) {
        fn_0378dce8((int)self->handle, request, 0);
    } else {
        fn_0378da14(self->handle);
    }
    Opaque_0328a9d0_Source* source = ((Opaque_0328a9d0_Global*)data_1046cd00)->source;
    if (source) {
        Opaque_0328a9d0_SourceVtable* vtable = source->vtable;
        fn_03986e68(self->target, vtable->value(source));
    }
}
