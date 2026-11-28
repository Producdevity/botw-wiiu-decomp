typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" s32 data_10510a28;

namespace {
struct Settings {
    char padding_0[0x98];
    f32 default_x, default_y, default_z;
    u8 use_override;
    char padding_a5[3];
    f32 override_x, override_y, override_z;
};

struct Vec3 {
    f32 x, y, z;
};
}

extern "C" void fn_02c1d158(void *result) {
    reinterpret_cast<Vec3 *>(result)->x = reinterpret_cast<const Settings *>(&data_10510a28)->default_x;
    reinterpret_cast<Vec3 *>(result)->y = reinterpret_cast<const Settings *>(&data_10510a28)->default_y;
    reinterpret_cast<Vec3 *>(result)->z = reinterpret_cast<const Settings *>(&data_10510a28)->default_z;
    if (reinterpret_cast<const Settings *>(&data_10510a28)->use_override != 0) {
        reinterpret_cast<Vec3 *>(result)->x = reinterpret_cast<const Settings *>(&data_10510a28)->override_x;
        reinterpret_cast<Vec3 *>(result)->y = reinterpret_cast<const Settings *>(&data_10510a28)->override_y;
        reinterpret_cast<Vec3 *>(result)->z = reinterpret_cast<const Settings *>(&data_10510a28)->override_z;
    }
}
