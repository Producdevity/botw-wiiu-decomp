struct Opaque_0203d528_Vector3 {
    float x;
    float y;
    float z;
};

struct Opaque_0203d528_Quaternion {
    float x;
    float y;
    float z;
    float w;
};
typedef char QuaternionSize[sizeof(Opaque_0203d528_Quaternion) == 16 ? 1 : -1];

struct Opaque_0203d528 {
    float m[3][3];
};

extern "C" void fn_0201766c(Opaque_0203d528_Quaternion* rotation, const Opaque_0203d528_Vector3* axis, float angle);
extern "C" void fn_0203d48c(Opaque_0203d528* matrix, const Opaque_0203d528_Quaternion* rotation);

extern "C" void fn_0203d528(Opaque_0203d528* matrix, const Opaque_0203d528_Vector3* axis, float angle) {
    Opaque_0203d528_Quaternion rotation;
    fn_0201766c(&rotation, axis, angle);
    fn_0203d48c(matrix, &rotation);
}
