struct Object;

typedef void (*Action)(Object*);

struct Table {
    char pad0[164];
    Action first;
    char pad168[4];
    Action second;
};

struct Object {
    char pad[60];
    Table* table;
};

extern "C" void fn_02e91448(Object* p) {
    p->table->first(p);
    p->table->second(p);
}
