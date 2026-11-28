typedef void (*Method)(void *, void *, int, int);

struct ReadyFlagged;

extern "C" int fn_03b9b7c0(void *source, void *value);
extern "C" ReadyFlagged *fn_03b9e7e0(void *source);

namespace {
struct Table {
    char padding_0[0x54];
    Method method_54;
};

struct Object {
    char padding_0[0x18];
    void *source_18;
    char padding_1c[0x44];
    Table *table_60;
};
}

extern "C" void fn_03b88744(void *object, void *value, int flags)
{
    Object *view = (Object *)object;
    Method method = view->table_60->method_54;
    method(object, value, fn_03b9b7c0(fn_03b9e7e0(view->source_18), value), flags);
}
