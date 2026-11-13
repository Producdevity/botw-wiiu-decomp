namespace {
struct InferredTable { unsigned char padding[576]; unsigned count; char** entries; };
struct InferredOwner { unsigned char padding[120]; InferredTable* table; };
struct InferredActor { unsigned char padding[924]; InferredOwner* owner; };
struct InferredObject { InferredActor* actor; };
}

extern "C" char* fn_02001d60(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    InferredTable* table = object->actor->owner->table;
    char** entry = table->entries;
    if (table->count > 5) entry += 5;
    return *entry;
}
