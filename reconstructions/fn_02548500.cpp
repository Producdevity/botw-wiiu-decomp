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

extern "C" void fn_02548500(void *arg0, void *arg1) {
    if (arg1 != 0) {
        ((Object *) arg0)->provider->adjust((Object *) arg0, (Vec3 *) arg1);
        ((Vec3 *) arg1)->x = fn_04210d48(((Object *) arg0)->angle_x) * ((Object *) arg0)->scale_x + ((Vec3 *) arg1)->x;
        ((Vec3 *) arg1)->y = ((Vec3 *) arg1)->y + ((Object *) arg0)->offset_y;
        ((Vec3 *) arg1)->z = fn_04210514(((Object *) arg0)->angle_z) * ((Object *) arg0)->scale_z + ((Vec3 *) arg1)->z;
    }
}
