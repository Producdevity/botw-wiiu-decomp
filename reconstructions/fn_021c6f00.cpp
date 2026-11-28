typedef void (*Method)(void*);

extern "C" void* fn_021c6c48(void* object);
extern "C" void fn_031cb974(int manager, int value);
extern "C" int data_1046d3ac;

namespace {
struct Source {
    unsigned char padding_0[0x10];
    int* value;
};

struct Table {
    unsigned char padding_0[0x264];
    Method method_264;
};

struct Target {
    unsigned char padding_0[0xC];
    Table* table;
};
}

extern "C" void fn_021c6f00(void* object) {
    fn_031cb974(data_1046d3ac, *((Source*)object)->value);
    if (data_1046d3ac != 0) {
        Target* target = (Target*)fn_021c6c48(object);
        if (target != 0) {
            target->table->method_264(target);
        }
    }
}
