namespace {
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
typedef char QuaternionSize[sizeof(Quaternion) == 16 ? 1 : -1];

struct Matrix33 {
    float m[3][3];
};
}

extern "C" void fn_0201766c(Quaternion* rotation, const Vector3* axis, float angle);
extern "C" void fn_0203d48c(Matrix33* matrix, const Quaternion* rotation);

extern "C" void fn_0203d528(Matrix33* matrix, const Vector3* axis, float angle) {
    Quaternion rotation;
    fn_0201766c(&rotation, axis, angle);
    fn_0203d48c(matrix, &rotation);
}
