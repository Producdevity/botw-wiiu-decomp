typedef void (*Method)(void*);

extern "C" void fn_02d6b514(void* owner);
extern "C" int fn_02a155e0(void* manager);
extern "C" void fn_030ea2cc(void* object);
extern "C" void* data_10463708;

namespace {
struct Table {
    unsigned char padding_0[0xB54];
    Method method_b54;
};

struct Owner {
    unsigned char padding_0[0xE8];
    Table* table;
};
}

extern "C" void fn_02cef700(void** object) {
    fn_02d6b514(*object);
    if (data_10463708 != 0 && fn_02a155e0(data_10463708) != 0) {
        Owner* owner = (Owner*)*object;
        owner->table->method_b54(owner);
        fn_030ea2cc(object);
    }
}
