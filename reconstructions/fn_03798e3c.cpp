extern "C" void* fn_037966a8(void *);
extern "C" unsigned fn_0344c5c4(void* p);

namespace {
struct Actor {
    char padding_0[0xF4];
    int value;
};
}

extern "C" int fn_03798e3c(void* actor) {
    void* link = fn_037966a8(actor);
    if (link != 0) {
        unsigned body = fn_0344c5c4(link);
        if (body != 0) {
            return body;
        }
    }
    return ((Actor *) actor)->value;
}
