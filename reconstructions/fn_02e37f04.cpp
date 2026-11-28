namespace {
struct Object {
    char padding_0[0x98];
    float x_98;
    float y_9c;
    float z_a0;
};
}

extern "C" void fn_034c9dbc(float *, const float *);

extern "C" void fn_02e37f04(float *self, float *source) {
    fn_034c9dbc(self, source);
    Object *object = (Object *)self;
    object->x_98 = source[0];
    object->y_9c = source[1];
    object->z_a0 = source[2];
}
