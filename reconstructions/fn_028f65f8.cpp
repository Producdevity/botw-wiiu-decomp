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

extern "C" int fn_028f65f8(void *arg0, void *arg1) {
    if (arg1 != 0) {
        ((Vec3i *) arg1)->x = ((Source *) arg0)->x;
        ((Vec3i *) arg1)->y = ((Source *) arg0)->y;
        ((Vec3i *) arg1)->z = ((Source *) arg0)->z;
        return 1;
    }
    return 0;
}
