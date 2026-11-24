struct Opaque_027876cc_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_027876cc {
    void* context;
    unsigned char unknown_04[36];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_45[3];
    Opaque_027876cc_vtable* vtable;
};

extern "C" void fn_0339bd70(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_1012c614;

extern "C" void fn_027876cc(Opaque_027876cc* self) {
    fn_0339bd70(self->context);
    self->flag = false;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    fn_037b8284(self, &data_1012c614, 0);
}

