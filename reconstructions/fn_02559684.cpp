struct Vec3 { int x, y, z; };
extern "C" void fn_02559684(Vec3 *out, char *self) {
    *out = **(Vec3 **)(self + 76);
}
