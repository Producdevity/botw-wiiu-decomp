extern "C" int fn_029fc3b4(void*, void*, int);
extern "C" int fn_02b62a40(void);
extern "C" void * data_10463578;

namespace {
struct Actor {
    char padding_0[0x204];
    float x;
    char padding_208[0xC];
    float y;
    char padding_218[0xC];
    float z;
};
}

extern "C" int fn_026d172c(void **object) {
    struct {
        float x;
        float y;
        float z;
    } position;
    Actor *actor = (Actor*)*object;
    position.x = actor->x;
    void *world = data_10463578;
    position.y = actor->y;
    position.z = actor->z;
    if ((world != 0) && ((fn_029fc3b4(world, &position.x, 1) != 0) || (fn_029fc3b4(world, (void *)(fn_02b62a40()), 1) != 0))) {
        return 1;
    }
    return 0;
}
