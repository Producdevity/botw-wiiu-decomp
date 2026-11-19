namespace {
typedef bool (*FallbackMethod)(void*, const void*);

struct DispatchTable {
    unsigned char beforeFallback[220];
    FallbackMethod fallback;
};

struct Node {
    unsigned char storage[12];
    const DispatchTable* table;
};
}

extern "C" bool fn_030e9e50(void* object, const void* key) {
    return static_cast<Node*>(object)->table->fallback(object, key);
}
