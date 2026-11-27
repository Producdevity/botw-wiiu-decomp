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

extern "C" void fn_0240a210(void *arg0, void *arg1, float *arg2) {
    if (arg1 != 0) {
        ((Vec3i *) arg1)->x = ((Source *) arg0)->x;
        ((Vec3i *) arg1)->y = ((Source *) arg0)->y;
        ((Vec3i *) arg1)->z = ((Source *) arg0)->z;
    }
    if (arg2 != 0) {
        *arg2 = ((Source *) arg0)->scalar;
    }
}
