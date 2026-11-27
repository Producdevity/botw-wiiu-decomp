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

extern "C" void fn_03bbfa3c(void* arg0) {
    Child* child = ((Parent*)arg0)->first;
    ((Parent*)arg0)->value = 0;
    while (child != 0) {
        int value = child->config->value;
        if (child->config->value != 0) {
            ((Parent*)arg0)->value = value;
        }
        child = (Child*)fn_03bbe6f4(child);
    }
}
