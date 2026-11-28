extern "C" float data_10076b68;
extern "C" unsigned char data_10076b6c[];
extern "C" void fn_0294f720(void *, int, void *);
extern "C" void fn_02b7f998(float* matrix, void* actor);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

namespace {
struct Object {
    void *actor;
    char padding_4[0x28];
    char block_2c[0x24];
    float matrix[9];
    int value_74;
};
}

extern "C" void fn_022cce74(void* object) {
    Object *self = reinterpret_cast<Object *>(object);
    fn_02b7f998(self->matrix, self->actor);
    self->value_74 = 0;
    fn_037946f0(object, reinterpret_cast<int>(data_10076b6c), 0, 0, 0, data_10076b68);
    fn_0294f720(self->actor, 4, self->block_2c);
}
