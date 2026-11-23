struct Object;

typedef void (*Action)(Object*);

struct Table {
    char pad0[132];
    Action first;
    char pad136[4];
    Action second;
};

struct Object {
    char pad[60];
    Table* table;
};

extern "C" void fn_02e9a924(Object* p) {
    p->table->first(p);
    p->table->second(p);
}
