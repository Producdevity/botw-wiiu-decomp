namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};
struct Object;
struct Provider {
    char padding_0[0x124];
    void (*adjust)(Object *, Vec3 *);
};
struct Object {
    char padding_0[0xC];
    Provider *provider;
    char padding_10[0x54];
    float scale_x;
    float scale_z;
    float angle_x;
    float angle_z;
    char padding_74[4];
    float offset_y;
};
}

extern "C" float fn_04210514(float);
extern "C" float fn_04210d48(float);

extern "C" void fn_02548500(void *object, void *value) {
    if (value != 0) {
        static_cast<Object *>(object)->provider->adjust(static_cast<Object *>(object), static_cast<Vec3 *>(value));
        static_cast<Vec3 *>(value)->x = fn_04210d48(static_cast<Object *>(object)->angle_x) * static_cast<Object *>(object)->scale_x + static_cast<Vec3 *>(value)->x;
        static_cast<Vec3 *>(value)->y = static_cast<Vec3 *>(value)->y + static_cast<Object *>(object)->offset_y;
        static_cast<Vec3 *>(value)->z = fn_04210514(static_cast<Object *>(object)->angle_z) * static_cast<Object *>(object)->scale_z + static_cast<Vec3 *>(value)->z;
    }
}
