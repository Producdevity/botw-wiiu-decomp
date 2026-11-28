extern "C" int fn_03191b70(void *);
extern "C" void * data_1046cf88;
extern "C" const unsigned char data_10549dd0[];

namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};
struct Source {
    char padding_0[0x40];
    Vec3 value;
};
}

extern "C" int fn_03191f3c(void *result) {
    int found = fn_03191b70(data_1046cf88);
    if (found == 0) {
        ((Vec3*)result)->x = ((const Vec3*)data_10549dd0)->x;
        ((Vec3*)result)->y = ((const Vec3*)data_10549dd0)->y;
        ((Vec3*)result)->z = ((const Vec3*)data_10549dd0)->z;
        return 0;
    }
    ((Vec3*)result)->x = ((Source*)found)->value.x;
    ((Vec3*)result)->y = ((Source*)found)->value.y;
    ((Vec3*)result)->z = ((Source*)found)->value.z;
    return 1;
}
