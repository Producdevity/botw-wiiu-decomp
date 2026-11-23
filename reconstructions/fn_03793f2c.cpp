#include "botw/ghs_intrinsics.h"

extern "C" void* fn_0308e578(unsigned size);

extern "C" const float data_10319d70;

struct Vector3 {
    float x;
    float y;
    float z;
};

extern "C" Vector3* fn_03793f2c(Vector3* storage) {
    __schedule_barrier();
    if (storage == 0) {
        storage = static_cast<Vector3*>(fn_0308e578(12));
        if (storage == 0) {
            return storage;
        }
    }
    storage->x = data_10319d70;
    storage->y = data_10319d70;
    storage->z = data_10319d70;
    return storage;
}
