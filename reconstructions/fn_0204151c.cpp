namespace {
struct Table {
    unsigned char padding[576];
    unsigned count;
    char** entries;
};
struct Owner { unsigned char padding[120]; Table* table; };
struct Object { unsigned char padding[924]; Owner* owner; };
}
extern "C" char* fn_0204151c(void* context) {
    const Object* object = static_cast<const Object*>(context);
    Table* table = object->owner->table;
    char** entry = table->entries;
    if (table->count > 58)
        entry += 58;
    return *entry;
}
