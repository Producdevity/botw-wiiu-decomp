namespace {
struct InferredTable { unsigned char padding[576]; unsigned count; char** entries; };
struct InferredOwner { unsigned char padding[120]; InferredTable* table; };
struct InferredActor { unsigned char padding[924]; InferredOwner* owner; };
struct InferredObject { unsigned char padding[4]; InferredActor* actor; };
}

extern "C" char* fn_02d43780(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    InferredTable* table = object->actor->owner->table;
    char** entry = table->entries;
    if (table->count > 21) entry += 21;
    return *entry;
}
