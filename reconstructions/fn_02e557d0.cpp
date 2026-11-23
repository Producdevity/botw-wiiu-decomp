namespace {
struct Vector3 {
    float x;
    float y;
    float z;
};
}

extern "C" const float data_10216154;
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_02e55664(Vector3* self, const Vector3* source);

extern "C" Vector3* fn_02e557d0(Vector3* storage, const Vector3* source) {
    if (!storage) {
        storage = static_cast<Vector3*>(fn_0308e578(12));
        if (!storage) {
            return 0;
        }
    }
    storage->y = data_10216154;
    storage->z = data_10216154;
    fn_02e55664(storage, source);
    return storage;
}
