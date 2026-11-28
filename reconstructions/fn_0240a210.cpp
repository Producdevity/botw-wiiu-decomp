namespace {
struct Source {
    char padding_0[0xB0];
    int x;
    int y;
    int z;
    float scalar;
};

struct Vec3i {
    int x;
    int y;
    int z;
};
}

extern "C" void fn_0240a210(void *object, void *result, float *scalar_out) {
    if (result != 0) {
        static_cast<Vec3i *>(result)->x = static_cast<Source *>(object)->x;
        static_cast<Vec3i *>(result)->y = static_cast<Source *>(object)->y;
        static_cast<Vec3i *>(result)->z = static_cast<Source *>(object)->z;
    }
    if (scalar_out != 0) {
        *scalar_out = static_cast<Source *>(object)->scalar;
    }
}
