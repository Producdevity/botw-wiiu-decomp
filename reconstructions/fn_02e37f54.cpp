namespace {
struct Object {
    char padding_0[0xa4];
    float x_a4;
    float y_a8;
    float z_ac;
};
}

extern "C" void fn_034c9dd8(float *, const float *);

extern "C" void fn_02e37f54(float *self, float *source) {
    fn_034c9dd8(self, source);
    Object *object = (Object *)self;
    object->x_a4 = source[0];
    object->y_a8 = source[1];
    object->z_ac = source[2];
}
