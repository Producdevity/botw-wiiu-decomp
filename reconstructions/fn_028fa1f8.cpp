extern "C" int fn_028f9ff4(void*, void*);
extern "C" int fn_028fa064(void*, void*, int);
extern "C" int fn_0294e318(void*);

namespace {
struct Target {
    char padding_0[568];
    int state;
};

struct Entity {
    char padding_0[908];
    Target *target;
};
}

extern "C" int fn_028fa1f8(void* * holder) {
    Entity *entity = (Entity *)*holder;
    Target *target;

    if (fn_0294e318(entity) != 0) {
        return 1;
    }
    target = entity->target;
    if (target != 0 && target->state != 0 && fn_028f9ff4(holder, entity) == 0 &&
        (fn_028fa064(holder, target, 1) != 0 || fn_028fa064(holder, target, 0) != 0 ||
         fn_028fa064(holder, target, 3) != 0)) {
        return 1;
    }
    return 0;
}
