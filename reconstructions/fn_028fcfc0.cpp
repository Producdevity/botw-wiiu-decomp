struct Opaque_028fcfc0 {
    void* owner;
    unsigned char unknown_04[44];
    unsigned char handle[8];
};

extern "C" void fn_02b74ac8(void* owner);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_1015ec88;

extern "C" void fn_028fcfc0(Opaque_028fcfc0* self) {
    fn_02b74ac8(self->owner);
    fn_0378da14(self->handle);
    fn_037b8284(self, &data_1015ec88, 0);
}
