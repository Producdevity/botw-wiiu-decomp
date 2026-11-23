struct Object;

typedef void (*Action)(Object*);

struct Table {
    char pad0[116];
    Action first;
    char pad120[4];
    Action second;
};

struct Object {
    char pad[60];
    Table* table;
};

extern "C" void fn_02e913b0(Object* p) {
    p->table->first(p);
    p->table->second(p);
}
