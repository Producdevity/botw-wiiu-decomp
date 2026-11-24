struct Opaque_0203d528 {
    struct Vector3 {
        float x;
        float y;
        float z;
    };

    struct Quaternion {
        float x;
        float y;
        float z;
        float w;
    };

    float m[3][3];
};

namespace {
typedef Opaque_0203d528::Vector3 Vector3;
typedef Opaque_0203d528::Quaternion Quaternion;
typedef Opaque_0203d528 Matrix33;
typedef char QuaternionSize[sizeof(Quaternion) == 16 ? 1 : -1];
}

extern "C" void fn_0201766c(Opaque_0203d528::Quaternion* rotation, const Opaque_0203d528::Vector3* axis, float angle);
extern "C" void fn_0203d48c(Opaque_0203d528* matrix, const Opaque_0203d528::Quaternion* rotation);

extern "C" void fn_0203d528(Opaque_0203d528* matrix, const Opaque_0203d528::Vector3* axis, float angle) {
    Quaternion rotation;
    fn_0201766c(&rotation, axis, angle);
    fn_0203d48c(matrix, &rotation);
}
