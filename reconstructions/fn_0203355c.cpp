extern "C" int fn_020330b0(void*);
extern "C" void fn_03804564(void*);

namespace {
struct Component {
    char padding_0[0x7C];
    void *model;
};

struct Actor {
    char padding_0[0x3A0];
    Component *component;
};
}

extern "C" void fn_0203355c(void *object) {
    if (fn_020330b0(object) != 0) {
        Component *component = ((Actor *)object)->component;
        if (component != 0) {
            void *model = component->model;
            if (model != 0) {
                fn_03804564(model);
            }
        }
    }
}
