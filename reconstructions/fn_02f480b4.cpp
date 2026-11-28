extern "C" void fn_02f47e00(int);
extern "C" int fn_02f47e18(void*, int, void*, int);

namespace {
struct Object {
    char padding_0[0x1BF4];
    char primary_buffer[0x2376 - 0x1BF4];
    unsigned char has_secondary;
    char padding_2377[0x2378 - 0x2377];
    int primary_id;
    int primary_result;
    int secondary_id;
    int secondary_result;
};
}

extern "C" void fn_02f480b4(void* object) {
    Object *self = (Object *) object;
    fn_02f47e00(self->primary_id);
    self->primary_result = fn_02f47e18(self, self->primary_id, self->primary_buffer, 0x10000);
    if (self->has_secondary != 0) {
        fn_02f47e00(self->secondary_id);
        self->secondary_result = fn_02f47e18(self, self->secondary_id, (char *) self + 0x1FB4, 0x5000);
    }
}
