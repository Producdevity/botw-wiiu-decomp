namespace {
struct Target {
    unsigned char padding_0[384];
    float value;
};

struct ActorVtable {
    unsigned char padding_0[780];
    Target *(*getTarget)(void *);
};

struct Actor {
    unsigned char padding_0[232];
    ActorVtable *vtable;
};
}

extern "C" const float data_10006b9c;

extern "C" int fn_02035ccc(void* * arg0) {
    Actor *actor = (Actor *)*arg0;
    Target *target = actor->vtable->getTarget(actor);
    if ((target != 0) && (target->value > data_10006b9c)) {
        return 1;
    }
    return 0;
}
