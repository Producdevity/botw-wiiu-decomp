typedef void (*Method)(void *, int);

extern "C" void fn_03c1596c(void *list, void *entry);

namespace {
struct Table {
    char padding_0[0xC];
    Method method_c;
};

struct Entry {
    char padding_0[0x214];
    int value_214;
    char padding_218[4];
    Table *table_21c;
};
}

extern "C" void fn_03c4434c(void *owner, void *entry)
{
    ((Entry *)entry)->value_214 = 0;
    if (entry != 0) {
        ((Entry *)entry)->table_21c->method_c(entry, 2);
        fn_03c1596c((char *)owner + 8, entry);
    }
}
