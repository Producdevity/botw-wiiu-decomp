struct Object;

typedef void (*Action)(Object*);

struct Table {
    char pad0[260];
    Action second;
    char pad264[20];
    Action first;
};

struct Object {
    char pad[12];
    Table* table;
};

extern "C" void fn_023d19d0(Object* p) {
    p->table->first(p);
    p->table->second(p);
}
