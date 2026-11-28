extern "C" void fn_03488a30(void*, void*);
extern "C" void fn_0335a56c(void*, void*);
extern "C" void fn_0344b07c(void*, void*);
extern "C" void fn_033645c8(void*);

namespace {
struct Child {
    char unknown[8];
    void* handle;
};

struct Object {
    char unknown0[8];
    void* handle;
    char unknown1[0x64];
    Child* child;
    char unknown2[0xC];
    char member[1];
};
}

extern "C" void fn_0335ae08(Object* self) {
    int local[12];

    fn_03488a30(self->child->handle, local);
    fn_0335a56c(self, local);
    fn_0344b07c(self->handle, self->member);
    fn_033645c8(self->child);
}
