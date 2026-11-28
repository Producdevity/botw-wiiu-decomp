namespace {
struct Source {
    char padding_0[0xA4];
    int x;
    int y;
    int z;
};

struct Vec3i {
    int x;
    int y;
    int z;
};
}

extern "C" void fn_0240a1ec(void *object, void *result) {
    if (result != 0) {
        static_cast<Vec3i *>(result)->x = static_cast<Source *>(object)->x;
        static_cast<Vec3i *>(result)->y = static_cast<Source *>(object)->y;
        static_cast<Vec3i *>(result)->z = static_cast<Source *>(object)->z;
    }
}
