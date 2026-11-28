namespace {
struct Source {
    char padding_0[0x44];
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

extern "C" int fn_028f65f8(void *source, void *destination) {
    if (destination != 0) {
        ((Vec3i *)destination)->x = ((Source *)source)->x;
        ((Vec3i *)destination)->y = ((Source *)source)->y;
        ((Vec3i *)destination)->z = ((Source *)source)->z;
        return 1;
    }
    return 0;
}
