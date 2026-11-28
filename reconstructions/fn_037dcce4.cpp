extern "C" void fn_03513128(int);
extern "C" void fn_0355ec60(int);
extern "C" void fn_03573a9c(int);
extern "C" void fn_03586d90(int);
extern "C" void fn_03589e68(int);

namespace {
struct Object {
    char padding_0[0x18];
    int value_18;
    int value_1c;
    char padding_20[8];
    int value_28;
    char padding_2c[0x1C];
    int value_48;
    int value_4c;
    char padding_50[0x24];
    int state;
    char padding_78[0xD4];
    unsigned char flags;
};
}

extern "C" void fn_037dcce4(void* object) {
    Object *self = reinterpret_cast<Object *>(object);
    fn_03589e68(self->value_28);
    fn_03513128(self->value_18);
    fn_0355ec60(self->value_1c);
    fn_03586d90(self->value_48);
    fn_03573a9c(self->value_4c);
    self->state = 2;
    self->flags |= 4;
}
