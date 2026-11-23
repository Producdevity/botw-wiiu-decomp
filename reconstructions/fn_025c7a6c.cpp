struct Object;

typedef void (*Action)(Object*);

struct Table {
    char pad0[300];
    Action second;
    char pad304[212];
    Action first;
};

struct Object {
    char pad[12];
    Table* table;
};

extern "C" void fn_025c7a6c(Object* p) {
    p->table->first(p);
    p->table->second(p);
}
