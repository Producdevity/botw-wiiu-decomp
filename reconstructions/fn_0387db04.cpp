extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" float fn_03c6fd44(void *, void *);

namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};
struct Owner {
    char padding_0[0x10];
    char area;
    char padding_11[0xB];
    unsigned char limited;
    char padding_1d[3];
    float limit;
    signed char hasPoint;
    char padding_25[3];
    Vec3 point;
    char lock;
};
}

extern "C" void fn_0387db04(void *object, void *position) {
    void *lock = &((Owner*)object)->lock;
    fn_030bb668(lock);
    if ((((Owner*)object)->limited == 0) || !(fn_03c6fd44(&((Owner*)object)->area, position) < ((Owner*)object)->limit)) {
        ((Owner*)object)->hasPoint = 1;
        ((Owner*)object)->point.x = ((Vec3*)position)->x;
        ((Owner*)object)->point.y = ((Vec3*)position)->y;
        ((Owner*)object)->point.z = ((Vec3*)position)->z;
    }
    fn_030bb69c(lock);
}
