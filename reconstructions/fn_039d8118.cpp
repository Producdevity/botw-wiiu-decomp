extern "C" void fn_03b01298(void*, void*);
extern "C" void fn_03b07158(void*, void*);
extern "C" void fn_03980adc(int, unsigned char);
extern "C" int fn_039d3cfc(void*);
extern "C" int fn_039d3d28(void*);
extern "C" int fn_039d5d50(void*);

namespace {
struct Object {
    char unknown0[0x384];
    void* first;
    int second;
    char unknown1[0x10];
    void* third;
};
}

extern "C" void fn_039d8118(Object* self, const unsigned char* value) {
    if (fn_039d5d50(self) != 0) {
        fn_03b07158(self->third, reinterpret_cast<void*>(*value));
    }
    if (fn_039d3cfc(self) != 0) {
        fn_03b01298(self->first, reinterpret_cast<void*>(*value));
    }
    if (fn_039d3d28(self) != 0) {
        fn_03980adc(self->second, *value);
    }
}
