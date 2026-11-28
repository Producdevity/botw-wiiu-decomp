namespace {
struct Config {
    char padding_0[0x10];
    int value;
};

struct Child {
    char padding_0[0xF4];
    Config* config;
};

struct Parent {
    char padding_0[4];
    Child* first;
    char padding_8[0x1C];
    int value;
};
}

extern "C" void* fn_03bbe6f4(void*);

extern "C" void fn_03bbfa3c(void* self) {
    Child* child = static_cast<Parent*>(self)->first;
    static_cast<Parent*>(self)->value = 0;
    while (child != 0) {
        int value = child->config->value;
        if (child->config->value != 0) {
            static_cast<Parent*>(self)->value = value;
        }
        child = static_cast<Child*>(fn_03bbe6f4(child));
    }
}
